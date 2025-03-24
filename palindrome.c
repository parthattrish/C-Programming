#include<stdio.h>
void main(){
    int i,j;
    int n,reverse;
    printf("enter a number");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10){
        j=i%10;
        reverse=reverse*10+j;
    }
    if(n==reverse){
        printf("true");
    }
    else{
        printf("false");
    }
}
