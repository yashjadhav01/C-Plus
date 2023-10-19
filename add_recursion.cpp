#include<iostream>
using namespace std;

int add(int n){
    if(n!=0)
    return n + add(n-1);
    return 0;
}
   
int main(){
    cout<<add(10);
    return 0;
}



