#include <iostream>
using namespace std;

int main()
{
    /*
        1. entry controlled loop -> for loop and while loop
        2. exit controlled loop -> do while loop
    */

    // for loop
    /*
        for(i=1;i<=10;i++){
            //code
        }
    */

    int i;
    // for(i=1;i<=10;i++){
    //     cout << "Hello : "<<i << endl;
    // }
    // for(i=10;i>=1;i--){
    //     cout << "Hello : "<<i<<endl;
    // }

    // for(i=1;i<=10;i = i + 3){
    //     cout << i << endl;
    // }

    // for(i=1;i<=10;i++){
    //     // if(i == 5){
    //     //     break;
    //     // }
    //     if(i == 5){
    //         continue;
    //     }
    //     cout << i << endl;
    // }

    // i = 1;
    // for (;;)
    // {
    //     if (i <= 10)
    //     {
    //         cout << i << endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

    // for(i=1;i<=10;i++){
    //     cout << i << endl;
    // }
    // cout << i;

    // for(i=1;i<=10;i++);
    // {
    //     cout << i<<endl;
    // }

    // code

    /*
    1.sum of 1 to 10
    2. ask number from user and Print Multiplication table
    3. check prime number or not
    4. factorial of number
    */

    // while loop
    /*
    while(con){
        //code
    }
    */

    // i = 1;
    // while(i<=10){
    //     cout << i << "\t";
    //     i++;
    // }

    // int no,dc = 0,d,sum = 0;

    /*
        no = 1234 -> 4
        no = 1234 / 10 -> 123 -> dc = 1
        no = 123 / 10 -> 12 -> dc = 2
        no = 12 /  10 -> 1 -> dc = 3
        no -> 1 / 10 -> 0 -> dc = 4


        no -> 1234 % 10 -> 4 -> sum = 0 + 4 -> 4
        no - 1234 / 10 -> 123
        no -> 123 % 10 -> 3 -> sum -> 4 + 3 = 7
        no -> 123 / 10 -> 12
        no -> 12 % 10 -> 2 -> sum -> 7 + 2 -> 9
        no -> 12 / 10 -> 1
        no -> 1 % 10 -> 1 -> sum -> 9 + 1 -> 10
        no = 1 / 10 -> 0
    */
    //    cout << "Enter a number : ";
    //    cin >> no;
    //    while(no > 0){
    //         d = no % 10;
    //         sum = sum + d;
    //         dc++;
    //         no = no / 10;
    //    }

    //    cout << "Digit Count : "<<dc;
    //    cout << "\nDigit Sum is :"<<sum;

    /*
    
        d = 1234 % 10 -> 4
        rev = 0 * 10 + d -> 0 + 4 -> 4
        no = 1234 / 10 -> 123
        d = 123 % 10 -> 3
        rev = 4 * 10 + 3 -> 43
        no = 123 / 10 -> 12
        d = 12 % 10 -> 2
        rev = 43 * 10 + 2->432
        no = 12 / 10 -> 1
        d = 1 % 10 -> 1
        rev = 432 * 10 + 1 -> 4321
        no -> 1 / 10 -> 0  
    */
    // int no,rev=0,d;
    // cout << "Enter a number : ";
    // cin >> no;
    // while(no !=0){
    //     d= no % 10;
    //     rev = rev * 10 + d;
    //     no = no / 10;
    // }

    // cout << "Reverse Number is "<<rev;

    int ch;
    do{
        cout << "\n1 -> Hii";
        cout << "\n2 -> Kem Cho";
        cout << "\n3 -> Bye";
        cout << "\n4 -> Exit";
        cin >> ch;
        switch(ch){
            case 1:cout << "Hello";
                break;
            case 2:cout << "Kem cho!";
                break;
            case 3:cout << "Bye";
                break;
            case 4:cout << "Exit";
                break;
        }
    }while(ch != 4);
    return 0;
}