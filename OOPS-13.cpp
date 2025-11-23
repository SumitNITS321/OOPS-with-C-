//Run Time Polymorphism
//Function Overriding
#include<iostream>
#include<string>
using namespace std;
class Parent{
public:
    void info(){
        cout<<"Parent Class..\n";
    }
};
class Child: public Parent{
public:
    void info(){
        cout<<"Child Class..\n";
    }
};
int main(){
    Parent p1;
    p1.info();
    Child c1;
    c1.info();
}
//Child class function info() is 'Overriding' the parent class function info()