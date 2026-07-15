#include <iostream>
using namespace std;

class Calc
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};
int main()
{

    Calc c;
    cout << c.add(10, 20) << endl;
    cout << c.add(10, 20, 30) << endl;
    cout << c.add(1.2,2.5)<<endl;
    return 0;
}