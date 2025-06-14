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
