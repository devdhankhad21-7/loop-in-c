// convert binary into octal number
# include<stdio.h>
#include<math.h>
void main(){
    int n,i=0,octal[10],decimal=0;
    printf("enter a binary number: ");
    scanf("%d",&n);
    while(n>0){
        decimal += (n%10)*pow(2,i);
        n/=10;
        i++;
    }
    i=0;
    while(decimal>0){
        octal[i]=decimal%8;
        decimal/=8;
        i++;
    }
    printf("octal number is: ");
    for(int j=i-1;j>=0;j--){
        printf("%d",octal[j]);
    }
    printf("\n");
}