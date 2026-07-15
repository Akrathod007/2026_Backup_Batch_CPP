#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal Sound";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog Bark";
    }
};

int main() {

    Animal *a;
    Dog d;

    a = &d;

    a->sound();

    return 0;
}
