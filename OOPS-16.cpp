//Static Keyword
#include<iostream>
#include<string>
using namespace std;
void fun(){
    int x=1;
    cout<<x++<<' ';
}
void funny(){
    static int x=1;
    cout<<x++<<' ';
}
class A;
class A{
    public:
    int x;
    void incx(){
        x=x+1;
    }
};
class ABC{
    public:
    ABC(){
        cout<<"Constructor.\n";
    }
    ~ABC(){
        cout<<"Destructor.\n";
    }
};
class XYZ{
    public:
    XYZ(){
        cout<<"Constructor.\n";
    }
    ~XYZ(){
        cout<<"Destructor.\n";
    }
};
int main(){
    fun();fun();fun();
    cout<<endl;
    funny();funny();funny();
    cout<<endl;

    A a;
    cout<<a.x<<" ";
    a.incx();
    cout<<a.x<<"\n";
    A b;
    cout<<b.x<<" ";
    b.incx();
    cout<<b.x<<"\n";

    if(true){
        ABC obj1;
    }
    cout<<"End!\n";
    if(true){
        static XYZ obj2;
    }
    cout<<"End!\n";
}