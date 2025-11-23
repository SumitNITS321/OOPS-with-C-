//Compile Time Polymorphism
//Constructor Overloading
#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    
    Student(){
        cout<<"Non-Parametrized constructor!\n";
    }
    Student(string name){
        this->name=name;
        cout<<"Parametrized constructor!\n";
    }
};
int main(){
    Student s1;
    Student s2("Tony Stark");
}