Find the Highest Altitude

Category: Prefix Sum, Arrays

What I Learned: Utilized the prefix sum technique to calculate the altitude at each point. Realized how a running sum can effectively track cumulative changes, making it easy to find the maximum value encountered.

Code Solution :

int largestAltitude(int* gain, int n) {
    int highAlt = 0, currAlt = 0;
    for (int i = 0; i < n; i++) {
        currAlt += gain[i];
        highAlt = currAlt > highAlt ? currAlt : highAlt;
    }
    return highAlt;
}
