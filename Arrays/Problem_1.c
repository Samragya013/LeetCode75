🔍 Problem: Merge Strings Alternately

🧵 Topic: Two Pointers & String Manipulation

🧠 What I Learned:

I gained a stronger understanding of how to apply the two-pointer technique to iterate over multiple inputs simultaneously, a powerful pattern frequently used in string and array problems.
I learned the importance of handling edge cases, such as when strings are of unequal lengths — ensuring that the algorithm remains robust and doesn’t overlook leftover characters.

💡 These seemingly simple problems hold a lot of subtle insights — and this one reminded me that solid programming is often about anticipating variations, not just solving the base case.

char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1), len2 = strlen(word2);
    char* result = malloc(len1 + len2 + 1);
    int i = 0, j = 0, k = 0;
    while (i < len1 || j < len2) {
        if (i < len1) 
            result[k++] = word1[i++];
        if (j < len2)
             result[k++] = word2[j++];
    }
    result[k] = '\0';
    return result;
}
