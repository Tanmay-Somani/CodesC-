#include<iostream>
using namespace std;
class Point{
    private:
    int x;int y;
    public:
    Point(int x1=0,int y1=0){
        x=x1;y=y1;
    }
Point addPoint(Point p){
    Point temp;
    temp.x=x+p.x;
    temp.y=y+p.y;
    return temp;
}
void display(){
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<"\n";
}
};
int main(){
    cout<<"Point 1"<<endl;
    Point p1(5,3);
    p1.display();
    cout<<"Point 2"<<endl;
    Point p2(15,4);
    p2.display();

}