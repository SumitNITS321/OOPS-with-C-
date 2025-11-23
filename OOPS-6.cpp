#include<iostream>
#include<string>
using namespace std;
class Person{
public:
    string name;
    int age;

    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    ~Person(){
        cout<<"Person destructor.\n";
    }
};
class Student: public Person{
public:
    int rollno;
    Student(string name,int age,int rollno): Person(name,age){
        this->rollno=rollno;
    }
    ~Student(){
        cout<<"Child destructor.\n";
    }

    void getInfo(){
        cout<<"NAME: "<<name<<endl;
        cout<<"AGE: "<<age<<endl;
        cout<<"ROLL NO.: "<<rollno<<endl;

    }
};
int main(){
    Student s1("Sumit",21,32);
    s1.getInfo();
    return 0;
}
