#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    Person()
    {
        name = "Ram";
    }

    void display()
    {
        cout << "Name : " << name << endl;
    }
};

class Student : virtual public Person
{
public:
    int roll;

    Student()
    {
        roll = 21;
    }

    void getRoll()
    {
        cout << "Roll :" << roll << endl;
    }
};

class Employee : virtual public Person
{
public:
    int eid;

    Employee()
    {
        eid = 101;
    }

    void getId()
    {
        cout << "EID : " << eid << endl;
    }
};

class TeachingAssistent : public Student, public Employee
{
public:
    string lang;

    TeachingAssistent()
    {
        lang = "Hindi";
    }

    void getLang()
    {
        cout << "Language : " << lang << endl;
    }
};
int main()
{
    TeachingAssistent t;
    t.getRoll();
    t.getLang();
    t.getId();
    t.display();  //Error
    // t.Student::display();
    // t.Employee::display();
    return 0;
}