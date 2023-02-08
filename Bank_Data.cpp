#include <iostream>
using namespace std;
class userdata
{
public:
   long long int acc, balance,Balance;
   string name, type;
   data()
   {
      cout << "enter your name:-";
      getline(cin,name);
      cout << "Account type:-";
      cin >> type;
      cout << "Account no:-";
      cin >> acc;
      cout << "Balance:-";
      cin >> balance;
   }
   cash()
   {
   
   int deposit,withdrawal;

   cout << "enter amount of deposit:-";
   cin >> deposit;
   cout << "Balance:-";
   cout << deposit + balance;
   cout<<"\nenter amount of withdraw:-";
   cin>>withdrawal;
   
    Balance=balance+deposit-withdrawal;

      cout<<"Final Balance="<<Balance<<endl;


   }

   display()
   {
         cout<<"\n====Your Account Details====\n";

      cout<<endl<<"Name:-"<<name;
      cout<<endl<<"Account Type:-"<<type;
      cout<<endl<<"Account No:-"<<acc;
      cout<<endl<<"Balance:-"<<Balance;


   }
};

int main()
{
   userdata X;


   X.data();
   X.cash();
   X.display();
}