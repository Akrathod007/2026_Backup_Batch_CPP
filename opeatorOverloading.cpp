#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int x) {
        value = x;
    }

    Number operator +(Number obj) {
        return Number(value + obj.value);
    }
};

int main() {

    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    cout << n3.value;

    return 0;
}
