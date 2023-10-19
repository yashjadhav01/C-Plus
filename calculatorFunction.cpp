#include<iostream>
using namespace std;
  void calculator(int a,int b,int c)
  {
     int add=a+b+c;
     cout<<"Addition of Two Numbers:"<<add<<"\n";
     int sub=a-b;
     cout<<"Subtraction of Two Numbers:"<<sub<<"\n";
     int multi=a*b;
     cout<<"Multiplication of Two Numbers:"<<multi<<"\n";
     int div=a/b;
     cout<<"Division of Two Numbers:"<<div<<"\n";
  }
  void myname(string myname="Yash"){
    cout<<myname<<"\n";
  }

int main(){
    calculator(4,2,4);
    myname();
    myname("Rahul");
    myname("Shekhar");
    

    return 0;
}
