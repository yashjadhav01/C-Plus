#include<iostream>
using namespace std;

int myNumber(int a,int b){
    return a+b;
}

double myNumber(double a,double b,double c){
    return a+b+c;
}

float myNumber(float a,float b,float c,float d){
    return a+b+c+d;
}


int main(){
   cout<<myNumber(10,20)<<"\n";
   cout<<myNumber(1570.6582,20675.36879,20675.4797)<<"\n";
   cout<<myNumber(10.5f,20.6f,20.7f,10.8f)<<"\n";

    return 0;
}
