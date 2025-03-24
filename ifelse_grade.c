#include<stdio.h>
void main ()
{
	int phy,pps,en,evs,maths;
	float sum;
	printf("Enter the marks obtained in Physics :");
	scanf("%d",&phy);
	printf("Enter the marks obtained in PPS :");
	scanf("%d",&pps);
	printf("Enter the marks obtained in maths :");
	scanf("%d",&maths);
	printf("Enter the marks obtained in EVS :");
    scanf("%d",&evs);
    printf("Enter the marks obtained in ELECTRICAL :");
	scanf("%d",&en);
	sum=(phy+pps+en+evs+maths)*4/5.F;

	if (sum <33){
		printf("koi na bhai,endsem phodenge!");
	}
	else if (sum >90){
		printf("you got A GRADE !\n");
	}
	else if (80< sum <90){
		printf("you got B GRADE !\n");
	}
		else if (70<sum<80){
		printf("you got C GRADE !\n");
	}
			printf(" CONGRATS! YOU GOT %f PERCENT MARKS\n ",sum);


}
