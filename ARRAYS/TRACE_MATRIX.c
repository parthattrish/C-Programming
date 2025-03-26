#include<stdio.h>
void main(){
    int i,j,m,n;
    printf("enter the order of matrix :mXn");
    scanf("%d %d",&i,&j);
    int a[i][j],b=0;
    printf("enter the elements of the array:");
    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
    scanf("%d",&a[m][n]);
        }
    }
    printf("sum of diognal elements of the array is :");
    for(m=0;m<i;m++){
            b=b+a[m][m];
        }
        printf("%d",b);
    }
