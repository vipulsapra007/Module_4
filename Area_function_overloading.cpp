/* Write a program to calculate the area of circle, rectangle and triangle 
usingFunction Overloading
 Rectangle: Area * breadth
 Triangle: ½ *Area* breadth
 Circle: Pi * Area *Area*/
#include<iostream>
using namespace std;
class Area
{
    public:
    void area(int a,int b)
    {
        cout<<"Area of Rectangle="<<a*b<<endl;
    }
    void area(int a)
    {
        cout<<"Area of circle   ="<<3.14*a*a<<endl;
    }
    void area(double a,double b)
    {
        cout<<"Area of Triangle ="<<0.5*a*b<<endl;
    }
};

int main()
{
    Area X;
    X.area(5,10);
    X.area(10);
    X.area(5.0,3.0);
}