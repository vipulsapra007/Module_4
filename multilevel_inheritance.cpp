/*Assume that the test results of a batch ofstudents are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marksobtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include <iostream>
using namespace std;
class student
{

public:
    int roll;
    string name;
    void detail()
    {
        cout << "enter name:-";
        getline(cin, name);
        cout << "Roll NO:-";
        cin >> roll;
    }
};
class TestScore : public student
{

public:
    int maths, history;
    void marks()
    {
        cout << "enter marks of Maths=";
        cin >> maths;
        cout << "enter marks of History=";
        cin >> history;
    }
};
class Result : public TestScore
{
    float percentage;

public:
    void TestResult()
    {
        percentage = (maths + history) /2;
        cout<<"==========Your Detail============="<<endl;
        cout << "your name=" << name << endl;
        cout << "Roll NO=" << roll << endl;
        cout << "marks of maths=" << maths << endl;
        cout << "marks of history=" << history << endl;
        cout << "your percentage=" << percentage << "%" << endl;
    }
};

int main()
{
    Result x;
    x.detail();
    x.marks();
    x.TestResult();
}