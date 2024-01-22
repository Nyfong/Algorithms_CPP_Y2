#include<iostream>
using namespace std;
// find the radius //
class Circle{
private:
 float radius, pi=3.14f; 
 
public:
float area;
void calculate();
};
void Circle::calculate()
{
    cout<<"Enter the Radius    ";
    cin>>radius;
    cout<<"The area is:"<< radius*radius*pi<<endl;
    cout<<"The Circumfrence is:"<< 2*pi*radius<<endl;
}

int main()
{
Circle obj;
obj.calculate();

    return 0;
}