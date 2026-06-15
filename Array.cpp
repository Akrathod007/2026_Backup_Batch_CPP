#include<iostream>
using namespace std;

int main(){
    /*
    int nums[5],i;
    for(i=0;i<5;i++){
        cout << "nums["<<i<<"] : ";
        cin >> nums[i];
    }

    for(i=0;i<5;i++){
        cout << nums[i]<<endl;
    }
    */

    // int nums[5] = {1,2,3},i;
    //   for(i=0;i<5;i++){
    //     cout << nums[i]<<endl;
    // }

    // cout << sizeof(nums);
    // cout <<endl<< sizeof(float);
    // cout <<endl<< sizeof(char);
    // cout <<endl<< sizeof(double);

    int nums[] = {1,2,3},i,size;
    size = sizeof(nums)/sizeof(int);
      for(i=0;i<size;i++){
        cout << nums[i]<<endl;
    }
    return 0;
}