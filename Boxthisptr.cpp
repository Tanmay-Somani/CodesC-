#include<iostream>
using namespace std;
class Box{
    public:
    void getvolume(void) { return length*width*height; }
    void setlength(double len){length=len;}
    void setwidth(double width){width=wi;}
    void setheight(double height){height=he}

Box operator+(cosnt Box&b){
    Box box;
    box.length=this->length+b.length;
    box.width=this->width+b.width;
    box.height=this->height+b.height;
    return box;
}
private:
double length,width,height;
};

