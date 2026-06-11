#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o'|| ch == 'U' || ch == 'u'){
        cout << "Vowel";
    }
    else if((ch >= 'A' && ch <= 'Z') or (ch >= 'a' && ch <= 'z')){
        cout << "Consonent";
    }
    else if(ch >= '0' && ch <= '9'){
        cout << "Digit";
    }
    else{
        cout << "Special Symbol";
    }
    return 0;
}