#include<iostream>
using namespace std;
class CopyC{
    public:
    int n1;
    int n2;
    void getFunction(){
        cin>>n1>>n2;

    }
    CopyC(){};
    void putFunction(){
        cout<<n1<<" "<<n2<<endl;
    }
    CopyC(CopyC &obj){
        int l=obj.n1;
        int m=obj.n2;
    }
};
int main()
{
    CopyC obj;
    obj.getFunction();
    obj.putFunction();
    CopyC copy1=obj;
    return 0;
}