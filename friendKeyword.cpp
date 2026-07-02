#include<iostream>

using namespace std;

class Demo{
    private:
        int no;
    
    public:
        void scan(){
            cout << "\nEnter a number : ";
            cin >> no;
        }
        int getNo(){
            return no;
        }
        friend void display(Demo &d);
        friend void compare(Demo d1,Demo d2);
};

void display(Demo &d){
    d.no = 1000;
    cout << "No : "<<d.no;
}

void compare(Demo d1,Demo d2){
    if(d1.no > d2.no){
        cout << "\nd1.no is bigger";
    }
    else{
        cout << "\nd2.no is bigger";
    }
}

int main(){
    Demo d1,d2;
    // cout << d1.no;
    d1.scan();
    display(d1);
    cout << "\n" << d1.getNo();
    d2.scan();
    display(d2);

    compare(d1,d2);
    return 0;
}




