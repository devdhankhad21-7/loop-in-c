// print the sum of all odd number from 1 to n
# include<stdio.h>
void main(){
    int i = 1, n,sum =0;
    printf(" entre a number : ");
    scanf("%d", &n);
    while(i<=n){
        if (i%2!=0){
            sum = sum +i;
        }
        i++;
    }
    printf(" sum of all odd number from 1 to %d is : %d",n , sum);

}
