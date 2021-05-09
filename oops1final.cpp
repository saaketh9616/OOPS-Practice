#include<iostream>
#include "student.cpp"
using namespace std;

int main() {
    student s; //default constructor
    
    student s1(10); //constructor 2

    student s2(10,100); // constructor 3

    student s3(s2);  // copy constructor

    s1=s2; //copy assignment operator

    student s5=s2; // intepreted actually by compiler as student s5(s2);(copy constructor)
    
    return 0;
}