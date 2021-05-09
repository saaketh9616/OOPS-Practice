#include<iostream>
using namespace std;
class student{
    int age;
    const int roll;
public:
    student(int a,int r) :roll(a),age(r){}
    void display(){
        cout<<age<<" "<<roll<<endl;
    }
};
int main() {
    student s1(10,20);
    s1.display();
    return 0;
}   