#include <iostream>

using namespace std;

// class Animal{
//     private:
//     int weight;
//     public:
//     string color = "Black";
//     //char color[30];

//     //getter and setter
//     void setWeight(int w){
//         weight = w;
//     }

//     int getWeight(){
//         return weight;
//     }

// };

// int main(){
//     Animal a;
//     cout << a.color<<endl;
//     // cout << a.weight<<endl;
//     a.setWeight(10);
//     cout << "Weight : "<<a.getWeight();
//     return 0;
// }

class ATM
{

private:
    int balance;

public:
    void setBalance(int bal)
    {
        if (bal > 0)
        {
            balance = bal;
        }
        else{
            cout << "\nInvalid Balance Amt";
        }
    }

    int getBalance()
    {
        return balance;
    }

    void deposit(int amt){
        balance += amt;
    }

    void withdraw(int amt){
        if(amt > balance){
            cout << "\nInvalid Balance";
        }
        else{
            balance -= amt;
        }
    }
};

int main()
{
    ATM a;
    a.setBalance(1000);
    cout << "\nBalance : " << a.getBalance();
    a.deposit(2000);
    cout << "\nBalance : " << a.getBalance();
    a.withdraw(2500);
    cout << "\nBalance : " << a.getBalance();
    a.withdraw(2500);
    cout << "\nBalance : " << a.getBalance();
    
    return 0;
}