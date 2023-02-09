#include <iostream>
using namespace std;
template <class t>
void ascending(t a)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        cout << "Ascending Order  =";
        for (i = 0; i < 5; i++)
        {
            cout << a[i];
            cout << "\t";
        }
    }
}


int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter array=";
        cin >> a[i];
    }
    ascending(a);
   
    
}