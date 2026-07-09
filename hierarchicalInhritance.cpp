#include<iostream>
using namespace std;

class Employee
{
protected:
    int id;

public:
    Employee()
    {
        id = 101;
    }

    void showID()
    {
        cout<<"Employee ID : "<<id<<endl;
    }
};

class Manager : public Employee
{
private:
    int teamSize;

public:
    Manager()
    {
        teamSize = 15;
    }

    void showManager()
    {
        cout<<"Team Size : "<<teamSize<<endl;
    }
};

class Developer : public Employee
{
private:
    string language;

public:
    Developer()
    {
        language = "C++";
    }

    void showDeveloper()
    {
        cout<<"Programming Language : "<<language<<endl;
    }
};

int main()
{
    Manager m;
    Developer d;

    cout<<"Manager Details"<<endl;
    m.showID();
    m.showManager();

    cout<<endl;

    cout<<"Developer Details"<<endl;
    d.showID();
    d.showDeveloper();

    return 0;
}
