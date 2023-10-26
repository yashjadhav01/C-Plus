#include<iostream>
using namespace std;

class access{
    public: // public access specifer
    int x; //public attribute
    private://private access specifer
    int y;//private attribute

};

int main(){
    access c1;
    c1.x=1;
    // c1.y=2;
    cout<<c1.x;
    // cout<<c1.y;
    




    return 0;
}
