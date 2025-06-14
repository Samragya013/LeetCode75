Is Subsequence

Category: Two Pointers

What I Learned:

✅ Applied two-pointer technique to check if one string is a subsequence of another
✅ Handled edge cases like empty strings
✅ Strengthened string traversal logic

Code :

#include <stdbool.h>
#include <string.h>

bool isSubsequence(char * s, char * t) {
    if (!*s) return true;
    int curr = 0;
    for (int i = 0; t[i] != '\0'; i++) {
        if (t[i] == s[curr]) {
            curr++;
            if (s[curr] == '\0') return true;
        }
    }
    return false;
}
