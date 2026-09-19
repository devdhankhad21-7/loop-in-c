// find frequency of digits in a number
#include <stdio.h>

void main() {
    int n;
    int digit;
    int freq[10] = {0};

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
    }

    if (n == 0) {
        freq[0] = 1;
    } else {
        while (n != 0) {
            digit = (int)(n % 10);
            if (digit < 0) {
                digit = -digit;
            }
            freq[digit]++;
            n /= 10; // Remove the last digit to prevent an infinite loop.
        }
    }

    printf("Frequency of digits in the number:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d: %d\n", i, freq[i]);
    }

}