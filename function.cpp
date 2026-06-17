#include<iostream>

using namespace std;
//Function is block of code that perform specific tasks.
/*
    Types of Function:
    1.Built-in Function
    2.User Defined Function

    Types of User Defined Function :
    1.No Return Type No Arguments
    2.No Return Type With Arguments
    3.With Return Type No Arguments
    4.With Return Type With Arguments
    
    Steps of Creating User Defined Function:
    1.Function Decalaration -> Return Type Func_Name(Arguments);
    2.Function Defintion -> Actual Code 
    3.Function Calling
*/

void sayHi(); //NR-NA
void add(int a,int b); // NR-WA
int mul(); //WR-NA
char swapCase(char ch);//WR-WA
int main(){
    int ans;
    char s;
    sayHi();
    sayHi();
    sayHi();
    add(10,20);
    add(30,500);
    // ans = mul();
    // cout << "\nAns : "<<ans<<endl;
    // cout << mul();
    s = swapCase('A');
    cout << "S :"<<s<<endl;
    s = swapCase('q');
    cout << "S :"<<s<<endl;
    
    return 0;
}

void sayHi(){
    cout << "Hello Hi\n";
}

void add(int a,int b){
    cout << "a : "<<a<< " + b : "<<b << " = "<< (a + b) << endl;
}

int mul(){
    int no1,no2;
    cout << "(mul fun)Enter a number 1 :";
    cin >> no1;
    cout << "(mul fun)Enter a number 2 :";
    cin >> no2;
    // cout << no1 * no2;
    return no1 * no2;
}

char swapCase(char ch){

    if(ch >= 'A' && ch <= 'Z'){
        ch = ch + 32;
    }else if(ch >= 'a' && ch <= 'z'){
        ch = ch - 32;
    }

    return ch;
}