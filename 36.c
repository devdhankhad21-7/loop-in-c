// find two complement of binary number
# include<stdio.h>
void main(){
    int n , i=0, binary[10], one_complement[10],
    two_complement[10];
    printf("entre a number: ");
    scanf("%d",&n);
    while(n>0){
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for(int j=0;j<i;j++){
        if(binary[j]==0){
            one_complement[j]=1;
        }
        else{
            one_complement[j]=0;
        }
    }
    for(int j=0;j<i;j++){
        if(one_complement[j]==0){
            two_complement[j]=1;
        }
        else{
            two_complement[j]=0;
            break;
        }
    }
    for(int j=j+1;j<i;j++){
        two_complement[j]=one_complement[j];
    }
    printf("two complement of the binary number is: ");
    for(int j=i-1;j>=0;j--){
        
        printf("%d",two_complement[j]);
    }
    printf("\n");
}
