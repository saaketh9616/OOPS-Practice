#include<iostream>
using namespace std;
class student{
    int age;
    int roll;
public:
    student() {
        cout<<"Def Constructor Invoked"<<endl;
    } 
    student(int a){
        cout<<"Constructor 2 invoked"<<endl;
        // age=a; or 
        this->age=a;
    }
    student(int a,int b)
    {
        cout<<"Constuctor 3 Invoked"<<endl;
        // age=a; or
        this->age=a;
        this->roll=b;
    }
    void display(){
        cout<<"Age: "<<age<<" "<<"Roll: "<<roll<<endl;
    }
    ~student() {
        cout<<"Destructor Invoked"<<endl;
    }
};