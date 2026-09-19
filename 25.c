// find lcm of two number 
# include<stdio.h>
void main(){
    int n , m;
    printf("entre a number: ");
    scanf("%d",&n);
    printf(" entre a second number:");
    scanf("%d",&m);
    int lcm = (n>m) ? n : m; // start with the greater number
    while(1){
        if(lcm%n==0 && lcm%m==0){
            printf("lcm of %d and %d is %d",n,m,lcm);
            break;
        }
    }
    
}