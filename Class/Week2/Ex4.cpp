#include<iostream>
using namespace std;

class Rupp
{
public:
int NumberFac;
void Display(); //function prototype
};
// outside class difinition..//
void Rupp::Display()
{
    cout<<"===Welcome to RUPP==="<<endl;
    cout<<" Enter number Faculty:"<<endl;
    cin>>NumberFac;
    switch( NumberFac)
    {
        case 1:
        {
            cout<<"Faculty of socail of science and humanities";
        }break;
        case 2:
        {
            cout<<"Faculty of ITE";
        }break;
        case 3:
        {
            cout<<"IF";
        }break;
        case 4:
        {
            cout<<"Faculty of Telecom";
        }break;
        case 5:
        {
            cout<<"Faculty of Bio" ;
        }break;
        case 6:
        {
            cout<<"Faculty of Engineering";
        }break;
    }
}


int main()
{
    Rupp obj;
    obj.Display();
    

    return 0;
}