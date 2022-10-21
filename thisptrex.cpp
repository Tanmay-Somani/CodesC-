#include<iostream>
#include <stdlib.h>
using namespace std;
class Surface_Area{
private:
int surarea;
public:
void doval(float a){
    surarea=6*a*a;
   this->surarea = surarea;
}
void print(){
cout<<surarea<<endl;
}
};
int main()
{
Surface_Area obj;
obj.doval(7.64);
obj.print();
    return 0;
}