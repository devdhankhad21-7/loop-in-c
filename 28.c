// check weather a number is armstronge or not
# include<stdio.h>
void main(){
    int n, temp, sum = 0, digit;
    printf("entre a number: ");
    scanf("%d",&n);
    temp = n;
    while( temp >0){
        digit = temp % 10;
        sum += digit*digit*digit;
        temp/=10;
    }
    if(sum==n){
        printf("%d is a armstronge number.\n",n);
    }
    else{
        printf(" %d is not aamstronge number.\n",n);
    }

}