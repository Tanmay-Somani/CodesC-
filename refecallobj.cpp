#include<iostream>
using namespace std;
class Test{
    private:
    int x,y;
    public:
    Test(int x=0,int y=0){this->x=x;this->y=y;}
    Test &setX(int a){x=a;return *this;}
    Test &setY(int b){y=b;return *this;}
    void print(){cout<<"x="<<x<<" y="<<y<<endl;}

};
int main(){
    Test obj(5,5);
    obj.setX(10).setY(10);
    obj.print();
    return 0;
}