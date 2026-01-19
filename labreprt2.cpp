#include<iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void setValues(float l, float w) {
        length = l;
        width = w;
    }
    float area()
    {
        return length*width;
    }
    float perimeter()
    {
        return 2*(length+width);
    }
};
  int main(){
     Rectangle rect;
     float l, w;
     cout<<"Enter length: ";
     cin>> l;
     cout<<"Enter width: ";
     cin >> w;

     rect.setValues(1,w);

     cout <<"Area of Rectangle = "<<rect.area()<<endl;
     cout <<"Perimeter of Rectangle = "<<rect.perimeter()<<endl;

     return 0;
     }
