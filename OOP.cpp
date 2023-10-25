#include<iostream>
using namespace std;
 class name{ //class creation
   public:
   int myMethod(int a);
    
 

   string firstname;
   string lastname;
   int age;    
 };
 
 int name::myMethod(int a){
    return a*5;

}




 

int main(){

    name name1; //object creation;
    name1.firstname="Yash";
    name1.lastname="Jadhav";
    name1.age=21;
    cout<<name1.myMethod(5);
    cout<<name1.myMethod(5);


    cout<<name1.firstname<<"\n";
    cout<<name1.lastname<<"\n";
    cout<<name1.age<<"\n";
    cout<<name1.myMethod(5);
    cout<<"\n";

    name name2; //object creation;
    name2.firstname="Rahul";
    name2.lastname="Yadav";
    name2.age=22;

    cout<<name2.firstname<<"\n";
    cout<<name2.lastname<<"\n";
    cout<<name2.age<<"\n";



    return 0;
}
