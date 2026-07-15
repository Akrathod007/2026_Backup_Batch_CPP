#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal Sound";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog Bark";
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat Meow";
    }
};

int main() {

    Animal *a;

    Dog d;
    Cat c;

    a = &d;
    a->sound();
    cout << endl;
    a = &c;
    a->sound();

    return 0;
}
