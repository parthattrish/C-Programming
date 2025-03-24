#include<stdio.h>
void main ()
{
	int a,b;
	char op;
	printf("enter the value of a :\n");
	scanf("%d",&a);
	printf("enter the value of b :\n"); 
	scanf("%d",&b);
	printf("enter the operator +,-,*,%%,/ :\n");
	scanf(" %c",&op);
   switch(op){
   	case '*':
   	printf("%d*%d=%d",a,b,a*b);
   	break;
   	case '%':
   		printf("%d %% %d =%d",a,b,a%b);
   		break;
    case '+':
    	printf("%d+%d=%d",a,b,a+b);
    	break;
    case '-':
    	printf("%d-%d=%d",a,b,a-b);
    	break;
    case '/':
	    if(b==0){
			printf("not defined !");
		}
		else{
    	printf("%d/%d=%d",a,b,a/b);}
    	break;
    	default:
    		printf("YOU SELECTED WRONG OPERATOR!");
   }
} 
