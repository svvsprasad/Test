#include<stdio.h>
void main()
{
    int num,sum=0;
    printf("This program keeps on adding the values given until you enter 0\n");
    do
    {
     printf("Enter a digit :");
     scanf("%d",&num);
     sum+=num;
    }while(num!=0);
    printf("sum = %d",sum);
}
