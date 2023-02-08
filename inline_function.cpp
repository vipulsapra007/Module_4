#include<iostream>
using namespace std;
class calculation
{
public:
int a;
inline display()
{
    cout<<"enter number=";
    cin>>a;
    cout<<"square      ="<<a*a<<endl;
    cout<<"Cube        ="<<a*a*a;

}
};
int main()
{
    calculation obj1;
    obj1.display();
    
}