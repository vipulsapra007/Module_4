#include<iostream>
using namespace std;
template <class t,class s>
void swapping(t a,s b)
{
a=a+b;
b=a-b;
a=a-b;

cout<<"after swapping a="<<a<<endl;
cout<<"after swapping b="<<b;

}
int main()
{
    int a,b;
    cout<<"enter value of a=";
    cin>>a;
    cout<<"enter value of b=";
    cin>>b;
    swapping(a,b);
}