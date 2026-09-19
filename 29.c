// print all armstrong number from 1 to n 
# include<stdio.h>
void main(){
    int i, n, sum ,rem, temp, count;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        temp=i;
        sum=0;
        count=0;
        while(temp!=0){
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;
            count++;
        }
        if(sum==1){
            printf("%d is armstrong number\n",i);
        }
    }
}
