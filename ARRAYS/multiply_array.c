#include<stdio.h>
void main(){
    int m,n,i,j,x,y,o;
    printf("enter the order of matrix 1 mXn:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements of matrix 1");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the order of matrix 2 mXn:");
    scanf("%d%d",&x,&y);
    int b[x][y];
    printf("enter the elements of matrix 2");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&b[i][j]);
        }
    }
        int c[m][y];
    if(n=!x){
        printf("the given matrices cannot be  multiplied !");
        exit(0);
    }
    else{
        for(i=0;i<m;i++){
            for(j=0;j<y;j++){
                for(o=0;o<x;o++){
                    c[i][o]=0;
                c[i][o]+=a[i][j]*b[j][o];
            }
        }
    }
}
      for(i=0;i<m;i++){
        for(o=0;o<x;o++){
            printf("%d\t",c[i][o]);
        }
        printf("\n");
      }
}
