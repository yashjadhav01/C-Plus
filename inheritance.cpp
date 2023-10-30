#include<iostream>
using namespace std;

class parent{
    public: 
    int a=1;
};
class child1: public parent{
    public:
    int b1=2;
};
class child2: public parent{
    public:
    int b2=3;
};
class grandchild1: public child1{
    public:
    int c1=4;
};
class grandchild2: public child2{
    public:
    int c2=5;
};
class greatgrandchild: public grandchild2{
    public:
    int d=6;
};
int main(){
    parent p1;
    p1.a;
    cout<<p1.a<<"\n";

    child1 c1;
    c1.a;
    cout<<c1.a<<"\n";
    c1.b1;
    cout<<c1.b1<<"\n";

    child2 c2;
    c2.a;
    cout<<c2.a<<"\n";
    c2.b2;
    cout<<c2.b2<<"\n";

    grandchild1 gc1;
    gc1.a;
    cout<<gc1.a<<"\n";
    gc1.b1;
    cout<<gc1.b1<<"\n";
    gc1.c1;
    cout<<gc1.c1<<"\n";

    grandchild2 gc2;
    gc2.a;
    cout<<gc2.a<<"\n";
    gc2.b2;
    cout<<gc2.b2<<"\n";
    gc2.c2;
    cout<<gc2.c2<<"\n";

    greatgrandchild ggc1;
    ggc1.a;
    cout<<ggc1.a<<"\n";
    ggc1.b2;
    cout<<ggc1.b2<<"\n";
    ggc1.c2;
    cout<<ggc1.c2<<"\n";
    ggc1.d;
    cout<<ggc1.d<<"\n";

    return 0;
}
