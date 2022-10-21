#include <iostream>
using namespace std;
class Member
{
private:
    static int A;
    static int B;
    static int C;

public:
    Member() { cout << "A"; }
    static void disp()
    {
        cout << "the value of A is " << A << endl;
        cout << "the value of B is " << B << endl;
        cout << "the value of C is " << C << endl;
    }
};

int main()
{
    Member obj;
    obj.disp();
    return 0;
}