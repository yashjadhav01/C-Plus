#include<iostream>
using namespace std;

int main(){
 int age=16;
 try{
   if(age<18){
  throw(age);
 }
 else{
  cout<<"You can Vote"<<"\n";
  
 }

 }

 catch(...){
   cout<<"You cannot Vote, as the age is less than 18";
 }

    return 0;
}

