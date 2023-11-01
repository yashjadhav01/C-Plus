#include<iostream>
using namespace std;

int main(){
    int arr[10],i,num,n,c=0,pos;
    cout<<"Enter how many number u have to add in array;";
    cin>>n;
    cout<<"enter numbers";
    for(int i=1;i<=n;i++){
        cin>>arr[i];    
    }

    cout<<"enter the number which u have to search:";
    cin>>num;
    for(int i=1;i<=n;i++){
        if(arr[i]==num){
            c=1;
            pos=i;
            break;      

        }
    }
        if(c==0){
            cout<<"number not found"<<"\n";
        }
        else{
            cout<<"position of the "<<num<<" is at "<<pos <<" position";
        }
    

    return 0;
}
