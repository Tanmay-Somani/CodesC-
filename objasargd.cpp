// static keyword |const keyword
// does not allowed to be modified.lifetime of a program| it allows specifying a variable name
// call function without using objects|cannot modify objects
// can only be called by static data members|called by any type of object
// it is useful to declare global data used to access restrictions to functions|it is useful with pounters or references
#include <iostream>
#include <stdlib.h>
using namespace std;
class Student
{
    double mark1, mark2;

    Student createStudent()
    {
        Student student;
        student.mark1 = 230.5;
        student.mark2 = 433.5;
        cout << "Marks 1" << student.mark1 << endl;
        cout << "Marks 2" << student.mark2 << endl;
    }
};
int main()
{
    Student student1;
    student1 = createStudent();
    return 0;
}