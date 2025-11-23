#include<iostream>
#include<string>
using namespace std;
class Teacher{
    float salary;
public:
    Teacher(){
        cout<<"Hi, I am the constructor!\n";
        dept="IT";
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
    void setsalary(double s){
        salary=s;
    }
    //getter
    double getsalary(){
        return salary;
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
    Teacher t1;//Creating an Object
    t1.name ="Shradha";
    t1.subject="C++";
    t1.dept="CSE";
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    t1.setsalary(25000);
    cout<<t1.getsalary()<<endl;
    Teacher t2;
    return 0;
}
//Initialisation of a constructor means assgning a data value to one or more data members
//Pehle hi assign kar do