#include<iostream>
using namespace std;
class ClassB;
class ClassA{
    public:
    ClassA(){
        num1=12;
    }
    private:
    int num1;
    friend int multiply(ClassA,ClassB);
};
class ClassB{
    public:
    ClassB(){
        num2=5;
    }
    private:
    int num2;friend int multiply(ClassA,ClassB);
};
int multiply(ClassA obj1,ClassB obj2){
    return (obj1.num1*obj2.num2);
}
int main(){
    ClassA obj1;
    ClassB obj2;
    cout<<"Result after multiplication "<<multiply(obj1,obj2);
}