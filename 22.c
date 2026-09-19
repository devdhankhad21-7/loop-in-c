// find all factor of the number 
# include<stdio.h>
void main(){
    int i = 2,n;
    printf(" enter a number : ");
    scanf("%d",&n);
    printf(" factors of %d are :\n",n);
    printf("1\n");
    while(i<=n/2){
        if(n%i==0){
            printf("%d\n",i);
        }
        i++;
    }
}