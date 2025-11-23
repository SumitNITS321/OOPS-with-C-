#include<iostream>
#include<string>
using namespace std;
class Teacher{
    float salary;
public:
    Teacher(string name,string dept,string subject,long salary){//Parametrized
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }
    Teacher(Teacher &originalobj){//Copy Constructor
        cout<<"I am a custom copy constructor....\n";
        this->name=originalobj.name;
        this->dept=originalobj.dept;
        this->subject=originalobj.subject;
        this->salary=originalobj.salary;
    }
    //Properties or Attributes
    string name;
    string dept;
    string subject;
    

    //Methods aka Member Functions
    void changeDept(string newDept){
        dept=newDept;
    }
    //setter
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Dept: "<<dept<<endl;
    }
};
class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name,double cgpa){
        this->name=name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;    
    }
    Student(Student &orgobj){
        this->name=orgobj.name;
        this->cgpaPtr=orgobj.cgpaPtr;
    }

    ~Student(){
        delete cgpaPtr;
    }

    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }

};


int main(){
    Teacher t1("Shradha","CSE","C++",25000);
    t1.getInfo();
    Teacher t2(t1);
    t2.getInfo();//default copy constructor would have invoked if no copy constructor created
    Teacher t3(t1);
    t3.getInfo();//custom copy constructor invoked
    Student s1("Sumit Sharma",9.4);
    s1.getinfo();
    Student s2(s1);
    *(s2.cgpaPtr)=9.1;
    s1.getinfo();//shallow copy and its problem
    s2.getinfo();
    return 0;
}
//this->prop is same as *(this).prop