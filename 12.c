// print the sum of first and last digit 
# include<stdio.h>
void main(){
    int n, first, last , sum;
    printf(" entre a number : ");
    scanf("%d",&n);
    last = n%10;
    first = n;
    while(first>=10){
        first = first/10;
    }
    sum = first + last;
    printf(" sum of first and last digit is : %d" , sum);
}