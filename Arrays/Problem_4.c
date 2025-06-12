🌻 Can Place Flowers
Category: Greedy

What I Learned: Strategically placed flowers in available spots without breaking rules.

Key Skill: Greedy placement with edge condition checks.

Code:

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    for (int i = 0; i < flowerbedSize && n > 0; i++) {
        bool prev = i == 0 || !flowerbed[i - 1];
        bool fut = i == flowerbedSize - 1 || !flowerbed[i + 1];
        if (prev && fut && !flowerbed[i]) {
            flowerbed[i] = 1;
            n--;
        }
    }
    return n <= 0;
}
