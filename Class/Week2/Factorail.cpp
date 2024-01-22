#include<iostream>
using namespace std;
void Factorail()
{

      //n = (a)*(a-1)*(a-3);
    int n;
    cout<<"Enter Number:";
    cin>>n;  
    int a; // a use for n-1//
    a = n-1;
    while (a>=1){ 
     n= n*(a);
    cout<<""<<a+1<<"x";
     a--;
    }
    cout <<"1= Factorail ="<<n;
     
}
int main()
{
      Factorail();
      return 0;
}