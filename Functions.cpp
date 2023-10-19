#include<iostream>
using namespace std;
 
void name(){
    cout<<"hello world ";
    cout<<name<<"\n";
  }

void myFunction(int a, int b , string country="india"){
    int sum=a+b;
    int diff=a-b;
    cout<<country;
    cout<<sum;
    cout<<diff;
    
   
   
 }

int main(){
    myFunction(1,3);
    // name("yash");
    // name("shekhar");
    // name();

    // myFunction(2,3);
    // myFunction();
    // myFunction();

    




    return 0;
}

