#include <iostream>
using namespace std;
class cricketer
{
protected:
    string name = "Virat Kohli";
    string status = "Batsman";
    int Age = 35;
};
class batsman : public cricketer
{
public:
    int TotalRun = 1250, BestScore = 151, Innings = 70;
    float Average = TotalRun / Innings;

    display()
    {
        cout << "Name     =" << name << endl;
        cout << "Status   =" << status << endl;
        cout << "Age      =" << Age << endl;
        cout << "TotalRun =" << TotalRun << endl;
        cout << "BEstScore=" << BestScore << endl;
        cout << "Innings  =" << Innings << endl;
        cout << "Average  =" << Average;
    }

};

int
main()
{
    batsman obj1;
    obj1.display();

}