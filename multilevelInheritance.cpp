#include<iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    Person()
    {
        name = "Ansh";
    }

    void showPerson()
    {
        cout<<"Name : "<<name<<endl;
    }
};

class Employee : public Person
{
protected:
    int salary;

public:
    Employee()
    {
        salary = 50000;
    }

    void showSalary()
    {
        cout<<"Salary : "<<salary<<endl;
    }
};

class Manager : public Employee
{
private:
    string department;

public:
    Manager()
    {
        department = "IT";
    }

    void showDepartment()
    {
        cout<<"Department : "<<department<<endl;
    }
};

int main()
{
    Manager m;

    m.showPerson();
    m.showSalary();
    m.showDepartment();

    return 0;
}