#include<iostream>
using namespace std;
class Demo{
    int val;
    public:
        Demo(int x=0){
        val=x;
    }
int getValue() const{
    cout<<val;
    return val;
}
};
int main(){
    const Demo d(28);
    Demo d1(8);
d.getValue();
d1.getValue();
return 0;
}