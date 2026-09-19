// count number of digits in a number
# include<stdio.h>
void main(){
     int n, count =0;
        printf("enter a number : ");
        scanf("%d" , &n);           
        while(n!=0){  // 12!=0 then divide by 10 = 1 then count = 1
             n = n/10;
                count++;
        }
        printf( " number of digits in a number is : %d" , count);
}