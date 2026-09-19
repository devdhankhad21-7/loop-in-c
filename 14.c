// calcluate the sum of a digit 
# include<stdio.h>
void main(){
    int n ,  sum = 0;
    printf(" entre a number : ");
    scanf("%d", &n);
    while (n != 0){
         sum += n% 10;
         n /= 10;
    }
    printf(" sum of the digits is : %d", sum);
}