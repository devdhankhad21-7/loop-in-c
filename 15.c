// calcuate the product of digits of number 
# include<stdio.h>
void main(){
    int n, product = 1;
    printf(" number of dgits : ");
    scanf("%d", &n);
    while(n != 0){
        product *= n%10;
        n /=10;
    }
    printf(" product of the digits is : %d", product);
}
