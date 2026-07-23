#include<iostream>
using namespace std;

int main(){
    // int a,b;
    // cout << "Enter a : ";
    // cin >> a;
    // cout << "Enter b : ";
    // cin >> b;
    // try{
    //     if(b==0){
    //         throw b;
    //     }
    //     cout << a / b;
    // }
    // catch(int b){
    //     cout << "Divisible by zero";
    // }
    /*
    try{
        //risky code
    }
    catch(){
        print
    }
    */

    try{
        int ch;
        cout << "Enter a ch : ";
        cin >> ch;
        if(ch == 1){
            throw 1;
        }
        else if(ch == 2){
            throw 1.2f;
        }
        else if(ch == 3){
            throw "String exception";
        }
    }
    // catch(int no){
    //     cout << "Interger Exception "<<no;
    // }
    // catch(float f){
    //     cout << "Float Exception "<<f;
    // }
    // catch(const char *msg){
    //     cout << msg;
    // }
    catch(...){
        cout << "Unkonwn Exception";
    }

    //char name[] =""
    //char *name = ""
    return 0;
}