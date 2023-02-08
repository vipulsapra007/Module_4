#include <iostream>
using namespace std;

class calculator
{

public:
    int a, b;
    void sum()
    {
        cout << "enter value of a=";
        cin >> a;
        cout << "enter value of b=";
        cin >> b;
        cout << "a+b=" << a + b;
    }

    void substraction()
    {
        cout << "enter value of a=";
        cin >> a;
        cout << "enter value of b=";
        cin >> b;
        cout << "a-b=" << a - b;
    }
    void multiplication()
    {
        int a, b;
        cout << "enter value of a=";
        cin >> a;
        cout << "enter value of b=";
        cin >> b;
        cout << "a*b=" << a * b;
    }
    void Division()
    {
        float x, y;
        cout << "enter value of x=";
        cin >> x;
        cout << "enter value of y=";
        cin >> y;
        cout << "a/b=" << x / y;
    }
};
int main()
{
    int n;

    cout << "press 1 for sum" << endl;
    cout << "press 2 for substraction" << endl;
    cout << "press 3 for multiplication" << endl;
    cout << "press 4 for Division" << endl;

    calculator b;
cout<<"enter your choice=";
    cin >> n;

    if (n == 1)

    {
        b.sum();
    }

    else if (n == 2)
    {
        b.substraction();
    }
    else if (n == 3)
    {
        b.multiplication();
    }
    else if (n == 4)
    {
        b.Division();
    }

    else
    {
        cout << "invalid input";
    }
        return 0;
}

