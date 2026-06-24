#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
}s2={2,"Shyam",89.90};

int main()
{
    Student s[3] = {{1,"Ram",98},{2,"Shyam",89},{3,"Manan",79}};
    int i;

    // for(i=0;i<3;i++){
    //     cout << "\nScan Student "<<i+1<<" Details :\n";
    //     cout << "Enter a roll : ";
    //     cin >> s[i].roll;
    //     cin.ignore();
    //     cout << "Enter a name : ";
    //     // cin >> s[i].name;
    //     getline(cin,s[i].name);
    //     cout << "Enter a marks : ";
    //     cin >> s[i].marks;
    // }

    for(i=0;i<3;i++){
        cout << "\nStudent "<<i+1<<" Details :\n";
        cout << "Roll : " << s[i].roll << endl;
        cout << "Name : " << s[i].name << endl;
        cout << "Marks : " << s[i].marks << endl;
    }

    // Student s1;
    // s1.roll = 1;
    // s1.name = "Ram";
    // s1.marks = 98.98f;
    // cout << "Enter a roll : ";
    // cin >> s1.roll;
    // cin.ignore();//clear newline form buffer
    // cout << "Enter a name : ";
    // // cin >>s1.name;
    // getline(cin,s1.name);
    // cout << "Enter a marks : ";
    // cin >> s1.marks;
    // cout << "Roll : " << s1.roll << endl;
    // cout << "Name : " << s1.name << endl;
    // cout << "Marks : " << s1.marks << endl;
    return 0;
}