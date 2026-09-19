// decimal into hexadecimal number
#include<stdio.h>
#include<math.h>
void main(){
    int n, i=0, hexadecimal[10];
    printf("enter a decimal number: ");
    scanf("%d",&n);
    while(n>0){
        hexadecimal[i] = n % 16;
        n = n / 16;
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