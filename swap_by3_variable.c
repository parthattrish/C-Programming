#include<stdio.h>
void main ()
{
	int a,b,c;
	printf("enter the value of a ");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("the value of a is %d and the value of b is %d",a,b);
	c=a;
	a=b;
	b=c;
	print("after swpping the value of a is %d and b is %d",a,b);
}
