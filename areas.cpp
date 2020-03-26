#include<iostream>
using namespace std;
float area(float r)
{
  return(3.14*r*r);
};
double area(double h,double b)
{
  return(0.5*b*h);
};
int area(int w,int h)
{
  return(w*h);
}
int main()
{
 int shape;
 cout<<"Select shape from the given list \n1.Circle \n2.rectangle \n3.triangle";
 cout<<"\nEnter number to choose shape :";
 cin>>shape;
 if(shape==1)
 {  float radius;
    cout<<"Enter value of 'radius' to check the area of circle :";
    cin>>radius;
    cout<<"Area of circle is :"<<area(radius)<<"sq.units.";
    }
 else if(shape==2)
 {   int w,h;
    cout<<"Enter value of width :";
    cin>>w;
    cout<<"Enter the value of height :";
    cin>>h;
    cout<<"Area of rectangle is :"<<area(w,h)<<"sq.units.";
     }
 else if(shape==3)
 {   double b,h;
     cout<<"Enter the value of base :";
     cin>>b;
     cout<<"Enter the value of height :";
     cin>>h;
     cout<<"Area of triangle is :"<<area(b,h)<<" sq.units.";
     }

  return 0;
}

