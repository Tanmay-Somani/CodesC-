#include<iostream>
using namespace std;
void func1(int numVal){
    numVal=10;
    cout<<numVal<<endl;
}
void func2(int &numRef){
    numRef=100;
    cout<<&numRef;
}
int main(){
    int num;
    func1(num);
    func2(num);
    return 0;
}