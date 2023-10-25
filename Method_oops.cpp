#include<iostream>
using namespace std;

class myclass{
    public:
    void mymethod(){
        cout<<"Hello Yash";
    }
};

int main(){
  myclass myobj;
  myobj.mymethod();
myobj.mymethod();
   return 0;
}