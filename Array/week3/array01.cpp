#include <iostream>
using namespace std;
class arry{
    public:
    int arr[10],i , pos, ele, a_size;
    void addArr(){
        cout<<"Enter array size:";
        cin>>a_size;
        cout<<"Enter array element\n";
        for(int i=0; i<a_size; i++){
            cin>>arr[i];
        }
    }
    void newelement(){
        cout<<"Enter new element of array:";
        cin>>ele;
        cout<<"Enter position :";
        cin>>pos;
        for(int i=a_size; i>pos; i--){
            arr[i]=arr[i-1];
        }
        arr[i]=ele;
        a_size++;
        cout<<"===============================================\n";
        cout<<"\tshow all array element:\t";
        
        for(i=0; i<a_size; i++){
            cout<<arr[i]<<" ";
        }
    }
    /*void show(){
        //arr[i]=ele;
        //a_size++;
        cout<<"===============================================\n";
        cout<<"\tshow all array element:\t";
        
        for(i=0; i<a_size; i++){
            cout<<arr[i]<<" ";
        }
    }*/
    
    void deletePos(){
    	cout<<"\n";
        cout<<"Enter position of array element to delete:";
        cin>>pos;
        for(i=pos; i<a_size-1; i++){
            arr[i]=arr[i+1];
        }
        //arr[i]=ele;
        a_size--;
        cout<<"all array after delete:";
        for(i=0; i<a_size; i++){
            cout<<arr[i]<<"  ";
        }
    }
    void search(){
        cout<<"Enter element of array:";
        cin>>ele;
        for(i=0; i<a_size; i++){
           if(arr[i]==ele){
                cout<<"Array["<<i<<"]="<<arr[i]<<endl;
            }
        }
        /*
    	cout<<"\n";
        cout<<"Enter position of array to search:";
        cin>>n;
        arr[n];
        cout<<"arr["<<n<<"]="<<arr[n];
        */
    }
    
};
int main(){
    arry call;
    call.addArr();
    call.newelement();
    //call.show();
    call.deletePos();
    call.search();
    return 0 ;
}