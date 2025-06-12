🔁 Reverse Vowels of a String
Category: Two Pointers

What I Learned: Used two pointers to selectively reverse only vowels.

Key Skill: Conditional swapping with character filters.

Code:

bool isVowel(char c) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (c == vowels[i]) {
            return true;
        }
    }
    return false;
}

char* reverseVowels(char* s) {
    int start = 0;
    int end = strlen(s) - 1;

    while (start < end) {
        while (start < end && !isVowel(s[start])) {
            start++;
        }
        while (start < end && !isVowel(s[end])) {
            end--;
        }
        
        // Swap vowels
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
    return s;
}
