#include <iostream>
#include <stdlib.h>
using namespace std;
class A
{

public:
    static void print()
    {
        cout << "A static function is being called" << endl;
    }
};
int main()
{
    const double a = 10;
    A::print();
    cout << a << endl;
    return 0;
}