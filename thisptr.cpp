#include<iostream>
using namespace std;
 class Demo{
        private:
        int num;
        char ch;
        public:
        void setmyvalues(int num,char ch){
            this -> num=num;
            this->ch=ch;
        }
        void display(){
            cout<<num<<endl;cout<<ch;
        }
    };

int main(){
    Demo obj;
    obj.setmyvalues(100,'A');
    obj.display();
    return 0;
}