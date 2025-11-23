#include<iostream>
#include<string>
using namespace std;
class Teacher{
    float salary;
public:
    Teacher(){//Non-Parametrized
        cout<<"Hi, I am the constructor!\n";
        dept="IT";
    }
    Teacher(string n,string d,string s,long sal){//Parametrized
        name=n;
        dept=d;
        subject=s;
        salary=sal;
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
class account{
private://Data Hiding
    long balance;
    string password;
public:
    string username;
    string accountID;
    
};


int main(){
    Teacher t1("Shradha","CSE","C++",25000);
    t1.getInfo();
    return 0;
}
