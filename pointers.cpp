#include<iostream>
using namespace std;

    //aapki best friend abhi bhi dev hi chala rahi h aapki koi ray??
    //Object->*pointertomember
    class mY_Class{
        int num;
        public:
        void set_num(int val){
            num=val;
        }
        void show_num(){cout<<num<<endl;}
    };
   
int main(){
    mY_Class obj,*p;
    obj.set_num(100);
    obj.show_num();
    p=&obj;
    p->show_num();
    return 0;
}