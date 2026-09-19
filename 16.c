// enter a number and print its revers 
# include<stdio.h>
void main(){
    int n, reverse = 0;
    printf(" entre a  number : ");
    scanf("%d", &n);
    while(n != 0){
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    printf(" the reverse of the number is : %d", reverse);
}