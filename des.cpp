#include<iostream>
#include "student.cpp"
using namespace std;

int main() {
    student s1(10,100);
    s1.display();
    student s2(20,2100);
    s2.display();
    student *s3 = new student(21,12100);
    s3->display();
    delete s3;
    return 0;
}