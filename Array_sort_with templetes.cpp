#include<iostream>
using namespace std;
class array
{
    protected:
    int Array[];
    public:
    void input()
    {
        for(int i=0;i<5;i++)
        {
            cin>>Array[i];
            cout<<Array[i];
        }
    }
};


int main()
{
    array x;
    x.input();
}