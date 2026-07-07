#include<iostream>
using namespace std;

class Parent{
    public:
        void Car(){
            cout << "\nParent's Car\n";
        }
};

class Child : public Parent{
    public:
        void Bike(){
            cout << "\nChild's Bike\n";
        }
};
int main(){
    Parent p;
    Child c;
    p.Car();
    c.Bike();
    c.Car();
    return 0;
}