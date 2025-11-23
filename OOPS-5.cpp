#include<iostream>
#include<string>
using namespace std;
class Person{
public:
    string name;
    int age;

    // Person(string name,int age){
    //     this->name=name;
    //     this->age=age;
    // }
    Person(){
        cout<<"Person Constructor\n";
    }
    ~Person(){
        cout<<"Person destructor.\n";
    }
};
class Student: public Person{
public:
    int rollno;
    Student(){
        cout<<"Child Constructor\n";
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
    Student s1;
    s1.name="Sumit";
    s1.age=21;
    s1.rollno=32;
    s1.getInfo();
    return 0;
}
//Firstly, constructor of base class is called and then of derived class