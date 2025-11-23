//Abstraction using Abstract class
#include<iostream>
#include<string>
using namespace std;
class Shape{//Abstract class
    virtual void draw() = 0;//Pure virtual function
};
class circle: public Shape{
    public:
        void draw(){
            cout<<"A Circle!\n";
        }
};
int main(){
    circle c;
    c.draw();
}
//Abstract Class cannnot be instantiated
//Instantiated: It cannot create objects
//Instant in C++ refers to objects
//Whichever class contains a pure virtual function
//that class becomes an abstract class by itself
//Abstract keyword can also be used to create abstract classes
//Syntax: abstract class <classname>