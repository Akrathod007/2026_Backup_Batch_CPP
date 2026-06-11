#include<iostream>

using namespace std;

int main(){
    // int day;
    // cout << "Enter a day Number : ";
    // cin >> day;

    // switch(day){
    //     case 1:cout << "MON";
    //         break;
    //     case 2:cout << "TUE";
    //         break;
    //     case 3:cout << "WED";
    //         break;
    //     case 4:cout << "THU";
    //         break;
    //     case 5:cout << "FRI";
    //         break;
    //     case 6:cout << "SAT";
    //         break;
    //     case 7:cout << "SUN";
    //         break;
    //     default:cout << "Invalid Day Number";
    // }

    // char ch;
    // cout << "Enter a character : ";
    // cin >> ch; //A

    // switch(ch){
    //     case 'A':
    //     case 'a':
    //     case 'E':
    //     case 'e':
    //     case 'I':
    //     case 'i':
    //     case 'O':
    //     case 'o':
    //     case 'U':
    //     case 'u':cout << "Vowel";
    //         break;
    //     default :cout << "Not Vowel";
    // }


    //code
    int no;
    cout << "Enter a number : ";
    cin >> no;

    switch(no % 2){
        case 1:cout << "ODD";
            break;
        case 0:cout << "Even";
            break;
    }
    return 0;
}