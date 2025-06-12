🍭 Kids With the Greatest Number of Candies
Category: Array

What I Learned: Compared each element with the global max to make boolean decisions.

Key Skill: Array max comparison with conditionals.

Code:

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int maxCandies = candies[0];

    for (int i = 1; i < candiesSize; i++) {
        if (candies[i] > maxCandies) {
            maxCandies = candies[i];
        }
    }

    bool* result = (bool*)malloc(sizeof(bool) * candiesSize);
    *returnSize = candiesSize;

    for (int i = 0; i < candiesSize; i++) {
        result[i] = (candies[i] + extraCandies >= maxCandies);
    }

    return result;
}
