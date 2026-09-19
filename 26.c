// print all prime number from 1 to n
# include<stdio.h>
 void main(){
    int i =2,n,j;
    printf(" entre a number: ");
    scanf("%d" , &n);
    while(i<=n){
        j=2;
        while(j<=i/2){
            if(i%j==0){
                break;
            }
            j++;
        }
        if(j>i/2){
            printf("%d\n",i);
        }
        i++;
    }
 }
