#include<iostream>
using namespace std;
class Myclass
{
public:
int a,b;
string result;
void find_max( );
};
void Myclass::find_max( )
{
cout<<"[A]:";
cin>>a;
cout<<"[B]:";
cin>>b;
result= ( a>b)? "A.bigger":
"B.bigger";
cout<< result<<endl;
}
int main()
{
Myclass finding;
finding.find_max();
    return 0;
}
