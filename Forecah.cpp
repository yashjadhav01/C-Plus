#include<iostream>
using namespace std;

int main(){
int myNumbers[6 ] = {10, 20, 30, 40, 50,60};
    
    // for (int i=0;i<5;i++){
    //  cout<<myNumbers[i]<<"\n";

    // }
    for( int a:myNumbers){
        cout<<a<<'\n';
    }


    return 0;
}
