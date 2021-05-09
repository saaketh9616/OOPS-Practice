#include<iostream>
#include"fraction.cpp"
using namespace std;

int main() {
    fraction f1(10,2);
    f1.display();
    fraction f2(5,4);
    f2.display();
    f1.add(f2);
    // f2.display();
    fraction *f3=new fraction(5,4);
    f3->display();
    fraction f4(3,5);
    f4.display();
    f3->multiply(f4);
    return 0;
}