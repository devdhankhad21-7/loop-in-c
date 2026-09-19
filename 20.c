// print all ASCII character with their value 
# include<stdio.h>
void main(){
    int i = 0;
    printf( " ASCII characters and their values:\n");
    while(i<=227){
        printf("%d = %c\n",i,i);
        i++;
    }
}