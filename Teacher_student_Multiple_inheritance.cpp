/* Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/

#include <iostream>
using namespace std;
class person
{
protected:
    string Teacher;
    string Student;
    string Tage;
    string Sage;

public:
    void info()
    {
        cout << "enter Teacher name:";
        getline(cin, Teacher);
        cout << "enter Student name:";
        getline(cin, Student);
        cout << "enter Age of Teacher:";
        cin >> Tage;
        cout << "enter Age of Student";
        cin >> Sage;
    }
};
class student
{
protected:
    int percentage;

public:
    void Percentage()

    {
        cout << "enter percentage of student:";
        cin >> percentage;
    }
};
class teacher : public person, public student
{
protected:
    int Sellary;

public:
    void sellary()
    {
        cout << "enter sellary of teacher:";
        cin >> Sellary;
    }
    void display()
    {
        cout<<"=========Details Given By You Are==========="<<endl;

        cout << "Teacher name is      =" << Teacher << endl;
        cout << "Teacher Age is       =" << Tage <<"year"<< endl;
        cout << "Student Name is      =" << Student << endl;
        cout << "Student Age is       =" << Sage <<"year"<< endl;
        cout << "Percentage of Student=" << percentage <<"%"<< endl;
        cout << "Seallary of Teacher  =" << Sellary <<"Rs"<< endl;
    }
};

int main()
{
    teacher x;
    x.info();
    x.Percentage();
    x.sellary();
    x.display();
}
