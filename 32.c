// cherck weather a number is strong number or not
# include<stdio.h>
void main(){
    int m, temp, sum = 0, digit, fact;
    printf("entre a number: ");
    scanf("%d",&m);
    for(temp=m;temp>0;temp/=10){
        digit=temp%10;
        fact=1;
        for(int i=1;i<=digit;i++){
            fact*=i;
        }
        sum+=fact;
    }
    if(sum==m){
        printf("%d is a strong number.\n",m);
    }else{
        printf("%d is not a strong number.\n",m);
    }
}