#include<iostream>
using namespace std;
class Animal{ //base class(parent)
public:
void AnimalSound(){
    cout<<"the animal sound may be vary  animal to animal"<<"\n";
}
};
class Dog:public Animal{
    public:
    void AnimalSound(){
        cout<<"the dog sound bow-bow"<<"\n";
    }
};

class Cat:public Animal{
    public:
    void AnimalSound(){
        cout<<"the cat sound meow-meow"<<"\n";
    }
};

int main(){
    Animal a1;
    a1.AnimalSound();
    Dog d1;
    d1.AnimalSound();
    Cat c1;
    c1.AnimalSound();
    
    return 0;
}
