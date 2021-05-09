#include <iostream>
#include "student.cpp"
using namespace std;

int main()
{
    student s1(20, 200);
    s1.display();

    // student s2(s1); or
    student *s2 = new student(s1);//copy constructor
    s2->display();

    student s3(*s2);
    // or student *s4=new student(*s3);
    s3.display();

    student s4(10,200);
    s4.display();
    student *s5 = new student(20,400);
    s5->display();

    s4=*s5;//copy assignment operator
    s4.display();
    s5->display();
    return 0;
}