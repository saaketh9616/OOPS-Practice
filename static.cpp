#include<iostream>
using namespace std;
class student{
    int age;
    int roll;
    static int count;
public:
    student(int age,int roll):age(age),roll(roll){
        count++; 
    }
    void display(){
        cout<<age<<" "<<roll<<" "<<count<<endl;
    }
    static void f(){
        cout<<count<<endl;
    }
};
int student::count=0;
int main() {
    student s1(10,101);
    student::f();
    s1.display();
    student s2(20,102);
    student::f();    
    s2.display();
    student *s3=new student(30,103);
    student::f();
    s3->display();
}