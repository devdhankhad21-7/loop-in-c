// print fibonacci series from 1 to n
#include<stdio.h>
void main(){
    int n, first =0, second = 1, next,i;
    printf("entre a number: ");
    scanf("%d",&n);
    printf("fibonacci series from 1 to %d is : " ,n);
    for(i=0;i<n;i++){
        if(i<=1){
            next=i;
        }
        else{
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d ", next);
    }
}