#include <iostream>
#include "student.cpp"
using namespace std;
int main()
{
    student s1;
    s1.display();

    student *s2 = new student;
    s2->display();

    student s3(20);
    s3.display();

    student *s4 = new student(10);
    s4->display();

    student s5(17, 100);
    s5.display();

    student *s6 = new student(20, 200);
    s6->display();
    
    return 0;
}