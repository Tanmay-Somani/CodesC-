#include<iostream>
using namespace std;
void swap(int*, int*);
int main(){
    int a=1,b=2;
    cout<<"Before swapping: "<<a<<" & "<<b<<endl;
    swap(&a,&b);
    cout<<"After swapping: "<<a<<" & "<<b<<endl;
}
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    
}