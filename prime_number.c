//prime or not
#include<stdio.h>
int prime(int a){
   int i,j;
   for(i=2;i<a/2;i++){
    if(a>2){
        if(a%i==0){
            printf("prime");
        }
        else{
            printf("not prime");
        }
    }
        else{
            printf("not prime");
        }
        }
    }
   void main(){
    int y;
      printf("enter a num:");
   scanf("%d",&y);
   prime(y);
   }
