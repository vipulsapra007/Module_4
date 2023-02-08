/* Write a Program of Two 1D Matrix Addition using Operator Overloading*/
#include <iostream>
using namespace std;
class Arrays
{
    int A[1];
    int B[1];
    int C[1];
public:
    void ArrayInput()
    {
        cout << "enter array 1=";
        cin >> A[1];
        cout << "enter array 2=";
        cin >> B[1];
    }
    void display();
    void operator+();
};
void Arrays::operator+()
{
    C[1] = A[1] + B[1];
}
void Arrays::display()
{
    cout << "array 1 =" << A[1] << endl;
    cout << "array 2 =" << B[1] << endl;
    cout << "sum of array=" << C[1] << endl;
}

int main()
{
    Arrays x;
    x.ArrayInput();
    +x;
    x.display();
}
