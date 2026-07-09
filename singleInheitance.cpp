#include<iostream>
using namespace std;

class Animal
{
protected:
    string name;
    int age;

public:
    Animal()
    {
        name = "Dog";
        age = 5;
    }

    void displayAnimal()
    {
        cout<<"Animal Name : "<<name<<endl;
        cout<<"Animal Age  : "<<age<<endl;
    }
};

class Pet : public Animal
{
private:
    string owner;

public:
    Pet()
    {
        owner = "Ram";
    }

    void displayPet()
    {
        cout<<"Owner Name  : "<<owner<<endl;
    }
};

int main()
{
    Pet p;

    p.displayAnimal();
    p.displayPet();

    return 0;
}