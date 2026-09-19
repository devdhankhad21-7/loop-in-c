// print the sum of all even natural numbers from 1 to n
#include <stdio.h>

void main() {
    int n, i = 2, sum = 0;

    printf("enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i += 2;
    }

    printf("the sum of all even natural numbers from 1 to %d is %d\n", n, sum);
    
}