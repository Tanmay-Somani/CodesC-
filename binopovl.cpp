#include <iostream>
#include <stdlib.h>
using namespace std;
class Complex
{
private:
    float real, img;

public:
    Complex() : real(0), img(0) {}
    void input()
    {
        cout << "enter ther parts: ";
        cin >> real;
        cin >> img;
    }
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }
    void print()
    {
        if (img < 0)
            cout << "Output complex number:" << real << img << "i" << endl;
        else
            cout << "Output complex number:" << real << "+" << img << "i" << endl;
    }
};
int main()
{
    Complex complex1, complex2, result;
    cout << "Complex number 1" << endl;
    complex1.input();
    cout << "Complex number 2" << endl;
    complex2.input();

    result = complex1 + complex2;
    result.print();
    return 0;
}
