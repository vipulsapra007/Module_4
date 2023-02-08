/* Write a program to concatenate the two strings using Operator Overloading*/

#include <iostream>
using namespace std;
class strings
{
    string X, Y, c;

public:
    void Name()
    {

        cout << "enter name=" ;
        cin >> X;
        cout << "enter sirname=" ;
        cin >> Y;
    }
    void display();
    void operator+();
};
void strings::operator+()
{
    c = X + Y;
}

void strings::display()
{
    cout << "name=" << X << endl;
    cout << "sirname=" << Y << endl;
    cout << "Full Name=" << c;
}

int main()
{
    strings x;
    x.Name();
    +x;
    x.display();
}