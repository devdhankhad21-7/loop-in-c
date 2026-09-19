// convert binary into decmial number system
#include<stdio.h>
#include<math.h>
void main(){
    int n, i=0, decimal=0;
    printf("enter a binary number: ");
    scanf("%d", &n);
    while(n>0){
        decimal += (n%10)*pow(2,i);
        n/=10;
        i++;
    }
    printf("decimal number is: %d", decimal);
}