// Calculate the factorial of a number.
#include <stdio.h>
 void main(){
    int i = 1,n;
    printf(" entre a number : ");
    scanf("%d",&n);
    int fact = 1;
    while(i<=n){
        fact = fact * i;
        i++;
    }
    printf(" the factorial of %d is %d", n, fact);
}