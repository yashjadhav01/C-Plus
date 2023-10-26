#include<iostream>
using namespace std;
class student{
  private:
  string name;
  string city;
  int age;

  public:
  int rollno;
  int marks;

  public:
  void setName(string name){
   this->name=name;
  }
  void setCity(string city){
   this->city=city;
  }
  void setAge(int age){
    this->age=age;
  }
   string getName(){
    return name;
  }
  string getCity(){
    return city;
  }
  int getAge(){
    return age;
  }
};


int main(){
 student s1;
 s1.setName("Yash");
 s1.setCity("Mumbai");
 s1.setAge(21);
 s1.rollno=1;
 s1.marks=90;
 cout<<"my name is "<<s1.getName()<<"\n";
 cout<<"I live in "<<s1.getCity()<<"\n";
 cout<<"My age is "<<s1.getAge()<<"\n";
 cout<<"Roll no "<<s1.rollno<<"\n";
 cout<<"Marks "<<s1.marks;

   return 0;
}
