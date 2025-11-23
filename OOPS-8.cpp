//Multiple Inheritance
#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rollno;
};
class Teacher{
public:
    string subject;
    long salary;
};
class TA: public Student, public Teacher{
public:
    string resArea;
};
int main(){
    TA s1;
    s1.name="TONY STARK";
    s1.resArea="Relativity";
    cout<<s1.name<<"\n";
    cout<<s1.resArea;
    return 0;
}
