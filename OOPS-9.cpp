//Hierarchial Inheritance
#include<iostream>
#include<string>
using namespace std;
class Person{
public:
    string name;
    int age;
};
class Student: public Person{
public:
    int rollno;
};
class Teacher: public Person{
public:
    string dept;
    long salary;
};

int main(){
    Person p1;
    p1.age=20;
    cout<<p1.age;
    return 0;
}
