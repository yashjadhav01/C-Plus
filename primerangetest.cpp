#include<iostream>
using namespace std;

int main(){
 int a,b,i,j;
 bool is_prime=true;
cout<<"Enter a start number:";
cin>>a;
cout<<"Enter a end number:";
cin>>b;

cout<<"prime numbers between "<<a <<" and "<<b <<" are " ;
for(i=a;i<=b;i++){
    if(i==0||i==1){
    continue;
    }
    is_prime=true;

for(j=2;j<=i/2;j++){
    if(i%j==0){
    is_prime=false;
    break;
    }
}
if(is_prime){
    cout<<i<<" ";
}
}
 return 0;
}    