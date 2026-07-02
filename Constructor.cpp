#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string name;
        Student(){
            cout << "Default Constructor Called\n";
        }

        // Student(){
        //     id = 101;
        //     name = "Ram";
        // }

        Student(int i,string n){
            id = i;
            name = n;
        }

        Student(Student &s){
            id = s.id;
            name = s.name;
        }
        ~Student(){
            cout << "\nDestructor Called";
        }
        void display(){
            cout << "\nID : "<<id<<endl;
            cout << "Name : "<<name<<endl;
        }
};

int main(){
    // Student s1,s2;
    // s1.display();
    // s2.display();
    Student stu;
    Student s1(101,"Ram");
    s1.display();

    Student s2(102,"Shyam");
    s2.display();

    Student s3 = s2;
    s3.display();
    return 0;
}//