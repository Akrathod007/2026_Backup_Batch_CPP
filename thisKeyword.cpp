#include<iostream>
using namespace std;

// class Student{

//     public:
//         int id;
//         string name;
//         Student(int id,string name){
//             this->id = id;
//             this->name = name;
//         }

//         void show(){
//             cout << this << endl;
//             cout << "Id : "<<this->id;
//             //                s1.id
//             cout << endl << "Name : "<<this->name <<endl;
//         }
// };

// int main(){

//     Student s1(10,"Ram");
//     Student s2(12,"Shyam");

//     s1.show();
//     cout << &s1 << endl;
//     s2.show();
//     cout << &s2 << endl;
//     return 0;
// }

// class Demo
// {
//     int x;

// public:

//     Demo(int x)
//     {
//         this->x=x;
//     }

//     Demo* getObject()
//     {
//         return this;
//     }

//     void display()
//     {
//         cout<<x;
//     }
// };

// int main()
// {
//     Demo d(50);

//     Demo *ptr=d.getObject();
//     d.display();
//     ptr->display();
// }


class Number
{
    int value;

public:

    Number()
    {
        value=0;
    }

    Number& add(int x)
    {
        value=value+x;
        return *this;
    }

    void display()
    {
        cout<<value;
    }
};

int main()
{
    Number n;

    n.add(10).add(20).add(30);
	// n   //.add(20)
     //      n     //.add(30);

    n.display();
}
