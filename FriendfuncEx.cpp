#include<iostream>
using namespace std;
class classH;
class classL;
class classB{

    private:
    int b =10;
    friend int area(classL,classH,classB);
    
};
class classL{

    private:
    int l =10;
    friend int area(classL,classH,classB);
  
};
class classH{
  
    private:
    int h =10;
    friend int area(classL,classH,classB);
};
int area(classL o1,classH o2,classB o3){
    int k;
    return(o2.h*o1.l*o3.b);
}
int main(){
    classL o1;
    classH o2;
    classB o3;
    cout<<area(o1,o2,o3);
    return 0;
}