// find first and last digits of a number
#include<stdio.h>

void main(){
    int n, first, last, temp;

    printf("enter a number : ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    if (n == 0) {
        first = 0;
    } else {
        first = n;
        while (first >= 10) {
            first = first / 10;
        }
    }

    printf("first digit of a number is : %d\n", first);
    printf("last digit of a number is : %d", last);
}

