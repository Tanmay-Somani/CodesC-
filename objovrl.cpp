#include<iostream>
using namespace std;
class Count{
private:
int value ;
public:
Count():value(5){}
void operator++(){
    ++value;
}
void print(){
cout<<"Count "<<value<<endl;
}
};
int main(){
    Count ctr1;
    ++ctr1;
    ctr1.print();
    return 0;
}