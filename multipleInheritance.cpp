#include<iostream>
using namespace std;

class Student
{
protected:
    string name;

public:
    Student()
    {
        name = "Ram";
    }

    void showStudent()
    {
        cout<<"Student Name : "<<name<<endl;
    }
};

class Sports
{
protected:
    string game;

public:
    Sports()
    {
        game = "Cricket";
    }

    void showGame()
    {
        cout<<"Game : "<<game<<endl;
    }
};

class Result : public Student, public Sports
{
private:
    int marks;

public:
    Result()
    {
        marks = 90;
    }

    void display()
    {
        cout<<"Marks : "<<marks<<endl;
    }
};

int main()
{
    Result r;

    r.showStudent();
    r.showGame();
    r.display();

    return 0;
}
