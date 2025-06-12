🧵 String Compression
Category: Two Pointers / In-Place

What I Learned: Compressed repeated characters using count directly in the array.

Key Skill: In-place string manipulation and numeric conversion.

Code:

int compress(char* chars, int charsSize) {
    int idx = 0;
    for (int i = 0; i < charsSize; i++) {
        char ch = chars[i];
        int count = 0;
        while (i < charsSize && chars[i] == ch) {
            count++;
            i++;
        }
        if (count == 1) {
            chars[idx++] = ch;
        } else {
            chars[idx++] = ch;
            char str[10];
            sprintf(str, "%d", count);
            for (int j = 0; str[j] != '\0'; j++) {
                chars[idx++] = str[j];
            }
        }
        i--;
    }
    return idx;
}
