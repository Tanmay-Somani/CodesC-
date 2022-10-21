#include<iostream>
using namespace std;
class square{
    int a1;
    int area;
    public:
    void getdata();
    void putdata();
    void Area(square);
};
void square::getdata(){
    cout<<"\n enter data"<<endl;
    cin>>a1;
};
void square::putdata(){
    cout<<a1;
};
void square::Area(square a){
    int area=a.a1^2;
    cout<<area;
};
int main(){
    square a,b;
    a.getdata();
    a.putdata();
    a.Area(b);
    return 0;
}