#include<iostream>
using namespace std;

class conct{
public:
  string firstname;
  string lastname;
  string city;
  int age;
  int rollno;
  string marks;

  conct(string a, string b,string c,int d,int f, string e){
    firstname=a;
    lastname=b;
    city=c;
    age=d;
    rollno=f;
    marks=e;
  };

  void line(){
    cout<<"---------------------------------------------------------";
  }

};

int main(){
    conct c1("Rahul","Yadav","Mumbai",20,1,"90%");
    
    conct c2("Yash","Jadhav","Pune",19,2,"92%");
    conct c3("Prem","pawar","Nashik",18,3,"85%");
    conct c4("Rohit","Shiravle","Mumbai",21,4,"80%");
    conct c5("Rahul","Patil","Baramati",22,5,"95%");
    conct c6("Raj","Sharma","Panvel",22,6,"65%");
    conct c7("Jash","Jain","Mumbai",20,7,"75%");
    conct c8("Pratik","Patil","Mahad",23,8,"55%");
    conct c9("Vrushal","Sonavane","Navi Mumbai",22,9,"98%");
    conct c10("Niraj","Jadhav","Indapur",24,10,"67%");
  c1.line();  cout<<"\n";
  cout<<c1.firstname<<" | "<<c1.lastname<<" | "<<c1.city<<" | "<<c1.age<<" | "<<c1.rollno<<" | "<<c1.marks<<"\n"; c1.line();
    cout<<"\n";
  cout<<c2.firstname<<" "<<c2.lastname<<" "<<c2.city<<" "<<c2.age<<" "<<c2.rollno<<" "<<c2.marks<<"\n"; c1.line();
    cout<<"\n";
  cout<<c3.firstname<<" "<<c3.lastname<<" "<<c3.city<<" "<<c3.age<<" "<<c3.rollno<<" "<<c3.marks<<"\n"; c1.line();
    cout<<"\n";
  cout<<c4.firstname<<" "<<c4.lastname<<" "<<c4.city<<" "<<c4.age<<" "<<c4.rollno<<" "<<c4.marks<<"\n"; c1.line();
    cout<<"\n";
  cout<<c5.firstname<<" "<<c5.lastname<<" "<<c5.city<<" "<<c5.age<<" "<<c5.rollno<<" "<<c5.marks<<"\n"; c1.line();
    cout<<"\n";
  cout<<c6.firstname<<" "<<c6.lastname<<" "<<c6.city<<" "<<c6.age<<" "<<c6.rollno<<" "<<c6.marks<<"\n"; c1.line();
    cout<<"\n";
  cout<<c7.firstname<<" "<<c7.lastname<<" "<<c7.city<<" "<<c7.age<<" "<<c7.rollno<<" "<<c7.marks<<"\n"; c1.line();
    cout<<"\n";
  cout<<c8.firstname<<" "<<c8.lastname<<" "<<c8.city<<" "<<c8.age<<" "<<c8.rollno<<" "<<c8.marks<<"\n"; c1.line();
    cout<<"\n";
  cout<<c9.firstname<<" "<<c9.lastname<<" "<<c9.city<<" "<<c9.age<<" "<<c9.rollno<<" "<<c9.marks<<"\n"; c1.line();
    cout<<"\n";
  cout<<c10.firstname<<" "<<c10.lastname<<" "<<c10.city<<" "<<c10.age<<" "<<c10.rollno<<" "<<c10.marks<<"\n"; c1.line();
    cout<<"\n";

    return 0;
}
