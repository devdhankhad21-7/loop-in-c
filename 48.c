// hexadecimal into binary number
#include<stdio.h>
#include<math.h>
void main(){
    int n, i=0, decimal=0, binary[10];
    printf("enter a hexadecimal number: ");
    scanf("%x",&n);
    while(n>0){
        decimal += (n%10)*pow(16,i);
        n/=10;
        i++;
    }
    i=0;
    while(decimal>0){
        binary[i]=decimal%2;
        decimal/=2;
        i++;
    }
    printf("binary number is: ");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
}