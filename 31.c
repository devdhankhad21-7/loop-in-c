// print all prefect number from 1 to n 
#include<stdio.h>
void main(){
    int i, j, n , sum;
    printf("entre a number; ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j<i;j++){
            if (i%j==0){
                sum+=j;
            }

        }
        if(sum==i){
            printf("%d is a prefect number.\n",i);
        }
    }
}