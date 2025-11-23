//Compile Time Polymorphism
//Function Overloading
#include<iostream>
#include<string>
using namespace std;
class Print{
public:
    int show(int a){
        return a;
    }
    char show(char b){
        return b;
    }
};
int main(){
    Print p1;
    cout<<p1.show(27);
    cout<<p1.show('a');
}