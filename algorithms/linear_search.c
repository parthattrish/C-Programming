#include<stdio.h>
void main(){
    int i,n,b,x;
    printf("enter the number of elements present in the array:");
    scanf("%d",&n);
    printf("enter the value to search:");
    scanf("%d",&x);
    int a[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
if(a[i]==x){
    printf("%d is present in the array at %d",x,i);
    b=0;
        break;
}
else if(a[i]!=x){
    b=1;
}

}
if(b){
    printf("THE SEARCHED ELEMENT IS NOT PRESENT IN THE ARRAY:");
}
}


