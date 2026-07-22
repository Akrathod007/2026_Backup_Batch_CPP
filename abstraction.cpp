#include<iostream>
using namespace std;

// class Car{
// private:
//     int speed;
// public:
//     void start(){
//         speed = 20;
//         cout << "\nCar Start at " << speed;
//     }

//     void stop(){
//         speed = 0;
//         cout << "\nCar Stop at " <<speed;
//     }
// };

// int main(){
//     Car c1;
//     c1.start();
//     c1.stop();
// }


class Animal{

public:
    virtual void sound() = 0;
};

class Dog : public Animal{
public:
    void sound(){
        cout << "\nDog barks";
    }
};

class Cat : public Animal{
public:
    void sound(){
        cout << "\nCat Meow";
    }
};

int main(){
    Dog d;
    Cat c;

    d.sound();
    c.sound();
}