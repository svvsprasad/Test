#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
    char str1[10]={"hello"};
    char str2[10]={"welcome"};

    //use of strcmp()
    printf("\nThis shows the use of  strcmp() :");
    int comp;
    comp=strcmp(str1,str2);
    printf("\nThe value obtained by comparing bot the strings is %d",comp);

    //use of strcpy()
    printf("\nThis shows the use of  strcpy() :");
    char str3[10];
    strcpy(str3,str2);
    printf("\nthe string copied into str3 is %s",str3);

    //use of strrev()
    printf("\nThis shows the use of  strrev() :");
    printf("\nThe reverse of str2 is %s",strrev(str2));

    //use of strlen()
    printf("\nThis shows the use of  strlen() :");
    printf("\nThe length of the string obtained is %d",strlen(str2));

    //use of strupr()
    char str4[10]={"upper"};
    printf("\nThis shows the use of  strupr() :");
    printf("\nThe string obtained after using strupr function is %s",strupr(str4));

    //use of strlwr()
    char str5[10]={"LOWER"};
    printf("\nThis shows the use of strlwr() :");
    printf("\nThe string obtained after using strlwr function is %s",strlwr(str5));

    //use of pow()
    printf("\nThis shows the use of pow() :");
    int base=9;
    int power=2;
    int value;
    value=pow(base,power);
    printf("\nThe value is %d",value);


    //use of sqrt()
    printf("\nThis shows the use of  sqrt() :");
    int ans,number=16;
    ans=sqrt(number);
    printf("\nThe value is %d",ans);

    //use of ceil()
    printf("\nThis shows the use of  ceil() :");
    printf("\nThe value obtained after using ceil function is %f",ceil(4.1));


     //use of floor()
    printf("\nThis shows the use of  floor() :");
    printf("\nThe value obtained after using floor function is %f",floor(4.9));

    //use of rand()
    printf("\nThis shows the use of rand() :");
    printf("The random value can be anything");
    printf("\nThe random value here is %d",rand()%15);
}




