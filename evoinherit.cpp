#include<iostream>
using namespace std;
class evolution{
public:
int species=10;
void general(){
    int evo=10;
    cout<<evo<<endl;
}
};
class gen1:public evolution{
    public:
    void gen(){
        int a;
        a+=10;
        cout<<a<<endl;
    }
};
int main(){
    gen1 obj;
    obj.general();
    obj.gen();
    return 0;
}