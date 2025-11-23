//Run Time Polymorphism
//Virtual Functions
#include<iostream>
#include<string>
using namespace std;
class Parent{
public:
    void info(){
        cout<<"Parent Class..\n";
    }
    virtual void hello(){
        cout<<"HEllo from parent.\n";
    }
};
class Child: public Parent{
public:
    void info(){
        cout<<"Child Class..\n";
    }
    void hello(){
        cout<<"HEllo from child.\n";
    }
};
int main(){
    Parent p1;
    p1.hello();
    Child c1;
    c1.hello();
}
