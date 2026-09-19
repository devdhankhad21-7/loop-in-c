// swap the first and last digit of number 
# include<stdio.h>
void main(){
    int n , first_digit, last_digit , num_digits , temp;
    printf(" entre a number : ");
    scanf("%d , &n");
    last_digit = n % 10;
    num_digits = 0;
    temp = n;
    while(temp !=0){
        temp = temp / 10;
        num_digits++;
    }
    first_digit = n / pow(10 ,num_digits - 1);
    last_digit = last_digit * pow(10 , num_digits - 1);
    printf(" number after swapping first and last  digits : %d, last digit : %d , first digit : %d", (n - first_digit - 
    last_digit) + last_digit + first_digit , last_digit , first_digit);
}
