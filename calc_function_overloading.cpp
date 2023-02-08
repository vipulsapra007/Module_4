    /* Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/


#include<iostream>
using namespace std;
class Calc
{
    public:
    
    void maths(int a,int b)
    {
        cout<<"a+b="<<a+b<<endl;

    }
    void maths(double a,double b)
    {
        cout<<"a-b="<<a-b<<endl;

    }
void maths(int a,int b,int c)
{
    cout<<"a*b*c="<<a*b*c<<endl;
}
void maths(double a,double b,double c)
{
    cout<<"a/b/c="<<a/b/c;
}

};


int main()
{
    Calc X;
    X.maths(10,5);
    X.maths(10.6,5.5);
    X.maths(5,10,8);
    X.maths(10.0,5.0,1.0);
}