/*call by reference refer to calling the function and passing the arguments using pointers or their memory locations and not the 
direct value*/
#include<stdio.h>
void swap(int*,int*);//function prototype
void swap(int *x,int *y ){
   int temp;
   temp =*x;
   *x=*y;
   *y=temp;
   printf("after swap :A=%dand B=%d",*x,*y);
}
void main(){
    int *a,*b;
    printf("enter the element  A:");
    scanf("%d",&a);
      printf("enter the element  B:");
    scanf("%d",&b);
    swap(&a,&b);
}
