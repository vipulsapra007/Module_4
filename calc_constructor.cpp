#include <iostream>
using namespace std;
class calculator
{
public:
    float a, b;
    calculator()
    {
        cout << "enter value of a=";
        cin >> a;
        cout << "enter value of b=";
        cin >> b;
        cout << "a+b=" << a + b<<endl;
        cout << "a-b=" << a - b<<endl;
        cout << "a*b=" << a * b<<endl;
        cout << "a/b=" << a / b<<endl;
    }
};

int main()

{
    calculator x;
}