#include<iostream>
using namespace std;
class weight{
    int kilogram;
    int gram;
    public:
    void getdata();
    void putdata();
    void sum_weight(weight,weight);
    };
void weight::getdata(){
    cout<<"\nKilograms";
    cin>>kilogram;
    cout<<"\ngram";
    cin>>gram;
};
void weight::putdata(){
    cout<<kilogram<<"Kgs"<<gram<<"gms"<<endl;
};
void weight::sum_weight(weight w1,weight w2){
   gram = w1.gram+w2.gram;
   kilogram=gram/1000;
   gram=gram%1000;
   kilogram+=w1.kilogram+w2.kilogram;

}
int main(){
    weight w1,w2,w3;
    cout<<"enter weight in kilograms and grams";
    cout<<"\n enter weight #1";
    w1.getdata();
    cout<<"\n enter weight #2";
    w2.getdata();
    w3.sum_weight(w1,w2);
    cout<<"\n weight#1 =";
    w1.putdata();
    cout<<"\n weight#2 =";
    w2.putdata();
    cout<<"\n Total weight=";
    w3.putdata();
    return 0;
}
