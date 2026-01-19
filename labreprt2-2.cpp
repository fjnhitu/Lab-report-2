#include<iostream>
using namespace std;

class student
{
private:
    string name;
    int roll;
    float m1, m2, m3;
public:
    void setData(string n, int r, float a, float b, float c)
    {
        name=n;
        roll=r;
        m1=a;
        m2=b;
        m3=c;
    }
    float totalMarks()
    {
        return m1+m2+m3;
    }
    float averageMarks()
    {
        return totalMarks()/3;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Total Marks: "<<totalMarks()<<endl;
        cout<<"Average Marks: "<<averageMarks()<<endl;
        cout<<"_______________________________"<<endl;
    }
};
int main()
{
    student s1, s2;
    s1.setData("Jane",101,85,90,88);
    s2.setData("Anne",102,78,82,80);

    s1.display();
    s2.display();
    return 0;
}
