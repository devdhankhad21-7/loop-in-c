// check waether a number is prefect number or not 
#include<stdio.h>
void main(){
    int n, temp, sum = 0,i;
    printf("entre a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("%d is prefect number.\n",n);
    }
    else{
        printf("%d is not a prefect number.\n",n);
    }
}
