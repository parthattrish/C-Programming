//factorial
//0!=1
#include<stdio.h>
int factorial(int x){
    int b,a;
    for(b=1;b<x;b++){
        a=1*b;
    }
    printf("%d",a);
}
void main (){
    int x;
    printf("enter the number to find factorial of:");
    scanf("%d",&x);
    factorial(x);
}
