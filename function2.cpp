#include<iostream>
using namespace std;

char gradeSystem(int m1,int m2,int m3,int m4,int m5);
int main(){
    // char g;
    // int m1,m2,m3,m4,m5;
    // cout << "Enter a Marks 1 : ";
    // cin >> m1;
    // g = gradeSystem(78,98,86,56,85);
    // cout << "Grade : "<<g;

    int no,f = 0,i;
    cout << "Enter a number : ";
    cin >> no;

    for(i=1;i<=no;i++){
        if(no % i == 0){
            f++;
        }
    }

    if(f == 2){
        cout << "Prime Number.";
    }
    else{
        cout << "Not Prime Number.";
    }
    return 0;
}
// char gradeSystem(int m1,int m2,int m3,int m4,int m5){
//     int total,per;
//     total = m1 + m2 + m3 + m4 + m5;
//     per = (total * 100) / 500;

//     cout << "Total : "<<total<<endl;
//     cout << "Percentage : "<<per<<endl;
//     if(per >= 90){
//         return 'A';
//     }else if(per >= 80){
//         return 'B';
//     }
//     else if(per >= 70){
//         return 'C';
//     }
//     else if(per >= 60){
//         return 'D';
//     }
//     else if(per >= 50){
//         return 'E';
//     }
//     else{
//         return 'F';
//     }

// }