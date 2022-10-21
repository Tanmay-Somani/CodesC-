#include <iostream>
#include <stdlib.h>
using namespace std;
class A
{
private:
    int x = 10;

public:
    void print()
    {
        cout << x << endl;
    }
};
int main()
{
    A obj;
    obj.print();
    return 0;
}
