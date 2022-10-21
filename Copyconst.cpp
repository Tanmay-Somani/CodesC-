#include<iostream>
using namespace std;
class Wall{
    private:
    double length;
    double height;
    public:
    Wall(double lth, double hgt){
        length = lth;
        height = hgt;
    }
    Wall(Wall &obj){
        length = obj.length;
        height = obj.height;
    }
    double calculate(){
        return length * height;
    }
};
int main(){
    Wall wall1(10.5,8.6);
    Wall wall2=wall1;
    cout<<wall1.calculate()<<endl;
    cout<<wall2.calculate()<<endl;
    }