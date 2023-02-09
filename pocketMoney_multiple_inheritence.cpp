/*pocket Money concept with multiple inheritance*/

#include <iostream>
using namespace std;
class father
{
protected:
    int Fpocket;

public:
    void FatherPocket()
    {
        cout << "enter pocket money given by Father=";
        cin >> Fpocket;
    }
};
class mother
{
protected:
    int Mpocket;

public:
    void MotherPocket()
    {
        cout << "enter pocket money given by Mother=";
        cin >> Mpocket;
    }
};
class child : public father, public mother
{
    

public:

    void Pocketmoney()
    {
        cout<<"\n\n=========Pocket Money Details With Specification==========\n";
        cout << "pocket Money Given by Father =" << Fpocket<<endl;
        cout << "pocket Money Given by MOther =" << Mpocket<<endl;
        cout << "Total pocket Money Get Child =" << Fpocket+Mpocket<<endl;
    }
};

int main()
{
    child x;
    x.FatherPocket();
    x.MotherPocket();
    x.Pocketmoney();
}