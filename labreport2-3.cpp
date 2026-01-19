#include<iostream>
using namespace std;

class circle
{
private:
    float radius;
public:
    void setRadius(float r){
         radius=r;}
    float area(){
         return 3.1416*radius*radius;}
    float circumference(){
         return 2*3.1416*radius;}
};
int main()
{
    circle c;
    float r;

    cout<<"Enter radius: ";
    cin>>r;

    c.setRadius(r);

    cout <<"Area of Circle= "<<c.area()<<endl;
    cout <<"Circumference of Circle= "<<c.circumference()<<endl;

    return 0;
}

