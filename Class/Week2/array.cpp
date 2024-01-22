#include<iostream>
using namespace std;
int main()
{
int array[10] ={1,2,3,4,5,6,7,8}; // let say we want to delete digit06;
int i, length = sizeof(array)/ sizeof(array[0]);
// Showing all element in array
cout<<"==========01"<<endl;
for(i=0;i< length; i++)
{
cout<<"Pos["<< i+1<<"]"<<array[i]<<endl;
}
cout<<"==========02"<<endl;
//Showing the updated array
int pos=6;
// cin >> pos;
//pos ti 6 yg jong delete
// tea ti 6 nov knong index ti 7
for(i=0;i< length; i++)
{
array[pos-1]= array[pos];

cout<<"Pos["<< i+1<<"]"<<array[i]<<endl;
}


    return 0;
}