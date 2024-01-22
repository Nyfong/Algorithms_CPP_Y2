#include<iostream>
using namespace std;
class Myclass
{   
public:
int data;    
Myclass(){};
Myclass( int data)
{
    this->data=data;
}
void Insert_data( Myclass & other); // function prototpye
void Show_data( Myclass & other);  // function prototpye
};
//1
void Myclass::Insert_data(Myclass & other)
{
cout<<"Enter the data";
cin>>other.data;
}
//2
void Myclass::Show_data(Myclass & other)
{
cout<<"this is the  data:"<<other.data<<endl;
}
//main function
int main()
{
//variables
int op, i,j,n; //n for size array
int pos,num;  //position
cout<<"Enter size index"<<endl; 
cin>>n;
Myclass obj[n];
do
{
cout<<"\n================================="<<endl;
cout<<"Enter the option"<<endl;  
cout<<"[1].Init"<<endl; 
cout<<"[2].Insert new element"<<endl; 
cout<<"[3].Display"<<endl; 
cout<<"[4].delete"<<endl; 
cout<<"[5].Search"<<endl; 
cout<<"================================="<<endl;
cin >>op;
switch (op)
{
case 1: 
{
for( i=0; i<n; i++){obj[i].Insert_data(obj[i]);}
} break;
case 2:
{
cout<<" Position"<<endl;
for( i=0; i<n; i++){    
    cout<<"["<<i+1<<"]"<<endl;
    obj[i].Show_data(obj[i]);
}
 cout<<"["<<i+1<<"]"<<endl;
// new element//
cout<<"Insert new element:"<<endl;
cout<<"Set A position u want"<<endl;
cin>> pos;
cout<<"Enter number"<<endl;
cin>>num; //element
// [1]=i0 c[2]=i1 [3]=i2
for( i=n; i>pos-1;i--)
{
   obj[i].data=obj[i-1].data;
}
n++;
obj[i].data=num;

}break;
///end case two
case 3:
{
for( i=0; i<n; i++)
{     cout<<"["<<i+1<<"]"<<endl;
      obj[i].Show_data(obj[i]);
}
}break;
//delete
case 4:
{
cout<<" Position"<<endl;
for( i=0; i<n; i++){    
    cout<<"["<<i+1<<"]"<<endl;
    obj[i].Show_data(obj[i]);
}

// new element//
cout<<"Set A position To delete"<<endl;
cin>> pos;
for( i=pos; i<num-1;i++)
{
   obj[i].data = obj[i+1].data;
}
n--; // take of one size//
}break;
//end delete
//search
case 5:
{
//found duplicate
// Comparation//
for( i=0; i<n; i++)  // index 
{  
  for(j=i;j<n;j++) // index +1 
    {
        if (obj[i].data == obj[j+1].data )
        {
        cout << "match" << endl;
        cout<< obj[i].data<< endl<< " at index"<< j+1<<" and "<<i<<endl;
        break;
        //  delete the duplicate 
        }  
        // if (obj[i].data !=obj[j+1].data )
        // {
        // cout << "UnDuplicate" <<  obj[i].data<<endl;
        // }  
    }
}
}break;
default:
    break;
}
} while (op !=6 && op<6);
    return 0;
}
