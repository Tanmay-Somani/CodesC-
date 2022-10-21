#include<iostream>
using namespace std;
class A{
    public:
    class B{
        private:
        int num;
        public:
        void getdata(int n){
            num=n;}
        void putdata(){
            cout<<"the number is "<<num;}
            };
            };
int main(){cout<<"Nested Classes in C++"<<endl;A::B obj; 
obj.getdata(9); 
obj.putdata();
return 0;
}