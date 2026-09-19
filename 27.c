// find the sum prime number between 1 to n
#include <stdio.h>

void main(){
    int n, i = 2, j, sum = 0, isprime;

    printf("Enter a n: ");
    scanf("%d", &n);

    while(i <= n){
        isprime = 1;
        j = 2;

        while(j * j <= i){
            if(i % j == 0){
                isprime = 0;
                break;
            }
            j++;
        }

        if(isprime){
            sum += i;
        }

        i++;
    }

    printf("sum of prime number is: %d\n", sum);
}