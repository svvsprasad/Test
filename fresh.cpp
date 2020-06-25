#include<iostream>
using namespace std;
int main()
{
char line[300];
int i,con=0,vow=0;
cout<<"Enter String :";
cin.getline(line,300);
for(i=0;line[i]!='\0';i++)
{
   if(line[i]=='a'|| line[i]=='e'|| line[i]=='i'||
      line[i]=='o'|| line[i]=='u'|| line[i]=='A'||
      line[i]=='E'|| line[i]=='I'|| line[i]=='O'||
      line[i]=='U')
      {
        vow = vow+1;
      }
   else if((line[i]>='a' && line[i]<='z') && (line[i]>='A' && line[i]<='z'))
    {
        con=con+1;
    }


}
cout<<"\nThe no.of vowels :"<<vow;
cout<<"\nThe no.of consonants :"<<con;
return 0;
}
