#include<stdio.h>
#include<string.h>
struct employee {
    int empid;
    char name[50];
    char designation[50];
    float salary;
};
void main(){
    struct employee emp[50];
    int i;
    for(i=0;i<50;i++){
        printf("enter the name of the employee:");
        scanf("%s",emp[i].name);
         printf("enter the Id of the employee:");
        scanf("%d",&emp[i].empid);
         printf("enter the designation of the employee:");
        scanf("%s",emp[i].designation);
        printf("enter the salary of the employee:");
        scanf("%f",&emp[i].salary);
    }
    if(strcmp(emp[i].designation, "manager")==0){
        printf("%s with employee id :%d is a manager",emp[i].designation,emp[i].empid);
    }

}
