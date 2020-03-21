#include<stdio.h>
#include<string.h>
struct details
{
    char name[20];
    int id;
    int experience;
    int salary;

}e1,e2,e3,e4,e5;
void main()
{
    printf("enter details in the order name\t id\t experience\t salary");
 printf("\nEnter details of employee 1");
 scanf("%s%d%d%d",e1.name,&e1.id,&e1.experience,&e1.salary);
 printf("\nEnter details of employee 2");
 scanf("%s%d%d%d",e2.name,&e2.id,&e2.experience,&e2.salary);
 printf("\nEnter details of employee 3");
 scanf("%s%d%d%d",e3.name,&e3.id,&e3.experience,&e3.salary);
 printf("\nEnter details of employee 4");
 scanf("%s%d%d%d",e4.name,&e4.id,&e4.experience,&e4.salary);
 printf("\nEnter details of employee 5");
 scanf("%s%d%d%d",e5.name,&e5.id,&e5.experience,&e5.salary);

 printf("\nDetails Of Employee 1 is listed below :");
 printf("\nname:%s\t employee id:%d\t experience:%d\t salary:%d",e1.name,e1.id,e1.experience,e1.salary);
 printf("\nDetails Of Employee 2 is listed below :");
 printf("\nname:%s\t employee id:%d\t experience:%d\t salary:%d",e2.name,e2.id,e2.experience,e2.salary);
 printf("\nDetails Of Employee 3 is listed below :");
 printf("\nname:%s\t employee id:%d\t experience:%d\t salary:%d",e3.name,e3.id,e3.experience,e3.salary);
 printf("\nDetails Of Employee 4 is listed below :");
 printf("\nname:%s\t employee id:%d\t experience:%d\t salary:%d",e4.name,e4.id,e4.experience,e4.salary);
 printf("\nDetails Of Employee 5 is listed below :");
 printf("\nname:%s\t employee id:%d\t experience:%d\t salary:%d",e5.name,e5.id,e5.experience,e5.salary);




}
