//Multilevel Inheritance
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

    void getInfo(){
        cout<<"NAME: "<<name<<endl;
        cout<<"AGE: "<<age<<endl;
        cout<<"ROLL NO.: "<<rollno<<endl;

    }
};
class GradStudent: public Student{
public:
    string resArea;
};
int main(){
    GradStudent s1;
    s1.name="TONY STARK";
    s1.resArea="Quantum Physics";
    cout<<s1.name<<"\n";
    cout<<s1.resArea;
    return 0;
}
