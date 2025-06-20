Maximum Number of Vowels in a Substring of Given Length

Category: Sliding Window, Strings

What I Learned: Applied the sliding window approach to count vowels in a fixed-length substring. This problem reinforced the idea of updating a count incrementally as the window slides, rather than re-counting for each substring.

Code Solution (in C): 


int maxVowels(char* s, int k) {
    bool isVowel(char chr){
        return chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u';
    }

    int len = strlen(s), max = 0;
    for(int i=0; i<k; i++)
        if(isVowel(s[i])) max++;
    
    int currMax = max;
    
    for(int i=k; i<len; i++){
        if(isVowel(s[i]))
            max++;
        if(isVowel(s[i - k]))
            max--;
        if(max > currMax) currMax = max;
    }
    return currMax;
}
