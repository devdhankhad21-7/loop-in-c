// decimal into binary number
#include<stdio.h>
void main(){
    int n, i=0, binary[10];
    printf("enter a decimal number: ");
    scanf("%d",&n);
    while(n>0){
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("binary number is: ");
    for(int j=i-1;j>=0;j--){
        printf("%d", binary[j]);
    }
}
