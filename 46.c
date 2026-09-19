// hexadecimal into decimal number
#include<stdio.h>
#include<math.h>
void main(){
    int n, i=0, decimal=0;
    printf("enter a hexadecimal number: ");
    scanf("%x",&n);
    while(n>0){
        decimal += (n%10)*pow(16,i);
        n/=10;
        i++;
    }
    printf("decimal number is: %d", decimal);
}