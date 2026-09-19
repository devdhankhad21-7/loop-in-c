//octal into hexadecimal number
#include<stdio.h>
#include<math.h>
void main(){
    int n, i=0, decimal=0, hexadecimal[10];
    printf("enter a octal number: ");
    scanf("%d",&n);
    while(n>0){
        decimal += (n%10)*pow(8,i);
        n/=10;
        i++;
    }
    i=0;
    while(decimal>0){
        hexadecimal[i]=decimal%16;
        decimal/=16;
        i++;
    }
    printf("hexadecimal number is: ");
    for(int j=i-1;j>=0;j--){
        if(hexadecimal[j]<10){
            printf("%d",hexadecimal[j]);
        }
        else{
            printf("%c",hexadecimal[j]+55);
        }
    }
}