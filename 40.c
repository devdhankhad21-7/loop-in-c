//octal to binary number
#include<stdio.h>
void main(){
    int n, i=0, binary[10], octal[10];
    printf("enter a octal number: ");
    scanf("%d",&n);
    while(n>0){
        octal[i] = n % 10;
        n = n / 10;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        switch(octal[j]){
            case 0:
                printf("000");
                break;
            case 1:
                printf("001");
                break;
            case 2:
                printf("010");
                break;
            case 3:
                printf("011");
                break;
            case 4:
                printf("100");
                break;
            case 5:
                printf("101");
                break;
            case 6:
                printf("110");
                break;
            case 7:
                printf("111");
                break;
            default:
                printf("Invalid octal digit: %d\n", octal[j]);
        }
    }
    printf("\n");
}