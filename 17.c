// check weathe a number is palindrome or not 
# include<stdio.h>
void main(){
    int n, reverse = 0, original;
    printf(" entre a number : ");
    scanf("%d", &n);
    original = n;
    while( n !=0){
        reverse = reverse * 10 +n %10;
        n = n/10;
    }
    if (original == reverse){
        printf(" the number is palindrome");
    }
    else{
        printf(" the number is not palindrome");
    }
}