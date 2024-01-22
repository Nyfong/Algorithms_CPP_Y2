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
    void begining(){
        cout<<"Enter element of array:";
        cin>>ele;
        for(i=a_size; i>0; i--){
            arr[i]=arr[i-1];
        }
        arr[0]=ele;
        a_size++;
    }
    void newelement(){
        cout<<"Enter new element any position of array:";
        cin>>ele;
        cout<<"Enter position :";
        cin>>pos;
        for(int i=a_size; i>pos-1; i--){
            arr[i]=arr[i-1];
        }
        arr[i]=ele;
        a_size++;
        
    }
    void deletePos(){
    	cout<<"\n";
        cout<<"Enter position of array element to delete:";
        cin>>pos;
        for(i=pos; i<a_size-1; i++){
            arr[i]=arr[i+1];
        }
        //arr[i]=ele;
        a_size--;
        //cout<<"all array after delete:";
        //for(i=0; i<a_size; i++){
        //    cout<<arr[i]<<"  ";
        //}
    }
    void search(){
        cout<<"search arry :";
        cin>>ele;
        for(i=0 ; i<a_size; i++){
            if(arr[arr[i]==ele]){
                cout<<"arr["<<i<<"]="<<arr[i]<<endl;
            }
        }
    }
    void display(){
        cout<<"show all array elements:";
        for(i=0; i<a_size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};
int main(){
    arry call;
    int num;
    do{
        cout<<"1, add"<<endl;
        cout<<"2. begining"<<endl;
        cout<<"3. add new element any position of array"<<endl;
        cout<<"4. delete element of array by position"<<endl;
        cout<<"5. display"<<endl;
        cout<<"6. search"<<endl;
        cout<<"7. exit"<<endl;
        cout<<"======================================"<<endl;
        cout<<"Enter number :";
        cin>>num;
        switch(num){
            case 1 :
                call.addArr();
                break;
            case 2 :
                call.begining();
                break;
            case 3:
                call.newelement();
                break;
            case 4 :
                call.deletePos();
                break;
            case 5 :
                call.display();
                break;
            case 6 :
                 call.search();
            default :
                cout<<"invalid number"<<endl;   
        }
    }while(num!=7);
    return 0;
}