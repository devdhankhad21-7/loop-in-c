// find the HCF of two numbers 
# include<stdio.h>
void main(){
    int n , m ;
    printf("entre a number: ");
    scanf("%d",&n);
    printf("entre second number:");
    scanf("%d", &m);
    while(n != m){
        if(n>m){
            n = n - m;
        }
        else{
            m = m - n;
        }
    }
    printf("HCF is: %d", n);
}