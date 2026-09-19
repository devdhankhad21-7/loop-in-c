// print all natural number in reverse order frome n to 1 
# include<stdio.h>
void main(){
    int i = 1,n;
    printf("enter a number : ");
    scanf("%d",&n);
    while(n>=i){
        printf("%d\n",n);
        n--;
    }
}