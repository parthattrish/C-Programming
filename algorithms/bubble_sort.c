#include<stdio.h>
void main(){
    int n,i,j,temp;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j+1]<=a[j]){
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);

    }

}
