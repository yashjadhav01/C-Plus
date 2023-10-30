#include<iostream>
using namespace std;
  class protect{
    public:
    int salary;
    string name;
    int id;
 

    protect(int s,string n,int i){
        salary=s;
        name=n;
        id=i;
        


    };
    void protectt(){
        cout<<salary<<"\n"<<name<<"\n"<<id;

    };
  };
  
  class employee: public protect{

    public:
    
    void setSalary(int s){
       salary=s;   
    }
     int getSalary(){
        return salary;
    }
    void setname(string n){
        name=n;
    }
    string getname(){
        return name; 
    }
    void setid(int i){
        id=i;
    }
    // int getid(){
    //     return id;
    // }

  };
int main(){
    protect p1(1,"yash",2300);
    p1.protectt();

    // e1.setname("Yash");
    // e1.setid(1234);
    // e1.setSalary(10000);
    // cout<<"Name:"<<e1.getname()<<"\n";
    // cout<<"id:"<<e1.getid()<<"\n";
    // cout<<"Salary:"<<e1.getSalary()<<"\n";

    return 0;
}
