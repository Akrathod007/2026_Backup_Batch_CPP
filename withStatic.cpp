#include <iostream>
using namespace std;

// void demo()
// {
//     static int x = 0;

//     x++;

//     cout << x << endl;
// }

// int main()
// {
//     demo();
//     demo();
//     demo();
// }

// class Student
// {
// public:
//     static int count;
// };

// int Student::count = 0;

// int main()
// {
//     Student s1;
//     Student s2;
//     Student s3;

//     s1.count++;
//     s2.count++;
//     s3.count++;

//     cout << Student::count;
// }


class Student
{
public:
    int id;
    static void message()
    {
        // id = 21;
        cout << "Welcome";
    }
};

int main()
{
    Student::message();
}
