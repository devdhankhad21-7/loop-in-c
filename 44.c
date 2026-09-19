// decimal into octal number
#include<stdio.h>   
void main(){
    int n, i=0, octal[10];
    printf("enter a decimal number: ");
    scanf("%d",&n);
    while(n>0){
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }
    printf("octal number is: ");
    for(int j=i-1;j>=0;j--){
        printf("%d", octal[j]);
    }
}