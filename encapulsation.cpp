#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    int marks;

    public:
     void setName(string  n){ //setter
        name=n;
     }
     void setAge(int a){
        age=a;
     }
     

     string getName(){
        return name;
     }
      int getAge(){
        return age;
      }

};

int main(){
    student s1;
    s1.setAge(20);
    s1.setName("yash");
    s1.marks=20;

    cout<<s1.getName()<<" ";
    cout<<s1.getAge();
    cout<<s1.marks;


    return 0;
}
