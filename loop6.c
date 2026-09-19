// print the sum of all natural number from 1 to n
# include<stdio.h>
void main(){
    int i = 1, n,sum=0;
    printf(" enter a number : ");
    scanf("%d",&n);
    while(i<=n){
        sum = sum + i ;
        i++;
    }
    printf(" sum of all natural number from 1 to %d is : %d",n ,sum);
}