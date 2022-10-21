#include <iostream>
using namespace std;
int a;
class Person
{
private:
    int age;

public:
    Person()
    {
        int age = 19;
    }
    Person(int age)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    Person person1, person2(45);

    cout << "Person1 Age " << person1.getAge() << endl;
    cout << "Person2 Age " << person2.getAge();
}