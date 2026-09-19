// find power of a number using loop 
# include<stdio.h>
void main(){
    int base, exponent, result = 1;
    printf(" enter base and exponent: ");
    scanf("%d %d",&base,&exponent);
    while(exponent != 0){
        result *= base;
        exponent--;
    }
    printf(" result = %d",result);
}