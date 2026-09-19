// print pascal triangle from n term 
#include<stdio.h>
void main(){
    int n, i, j, k;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            if(k==0 || k==i){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}