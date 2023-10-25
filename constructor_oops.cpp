#include<iostream>
using namespace std;
class conct{
public:
  string firstname;
  string lastname;
  string city;
  int age;
  conct(string a, string b,string c,int d){
    firstname=a;
    lastname=b;
    city=c;
    age=d;
  };

};

int main(){
   conct c1("Yash","Jadhav","Mumbai",21);
   cout<<c1.firstname<<" "<<c1.lastname<<" "<<c1.city<<" "<<c1.age;
    


    return 0;
}
