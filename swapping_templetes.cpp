/* Write a program of to swap the two values using templates*/
#include <iostream>
using namespace std;
template <typename t>

class Swapping
{
public:
    t x, y;
    Swapping(t a, t b)
    {
        // cout<<"enter value of a=";
        // cin>>a;
        // cout<<"enter value of b=";
        // cin>>b;
        x = a;
        y = b;

        cout << "before swapping a=" << x << endl;
        cout << "before swapping b=" << y << endl;
    }
    void afterswapping()
    {
        x = x + y;
        y = x - y;
        x = x - y;

        cout << "after swapping a=" << x << endl;
        cout << "after swapping b=" << y << endl;
    }
};
int main()
{
    Swapping<int> obj(10,9);
    obj.afterswapping();
}