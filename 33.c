#include <stdio.h>

int main(void) {
    int i, n, temp, sum, digit, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = 0;
        temp = i;

        while (temp > 0) {
            digit = temp % 10;
            fact = 1;

            for (int j = 1; j <= digit; j++) {
                fact *= j;
            }

            sum += fact;
            temp /= 10;
        }

        if (sum == i) {
            printf("%d is a strong number.\n", i);
        }
    }

    return 0;
}