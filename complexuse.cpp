#include<iostream>
#include"complex.cpp"
using namespace std;

int main() {
    int r1,r2,i1,i2;
    cin>>r1>>i1;
    cin>>r2>>i2;
    complex c1(r1,i1);
    complex c2(r2,i2);
    c1.add(c2);
    int r3,i3,r4,i4;
    cin>>r3>>i3;
    cin>>r4>>i4;
    complex c3(r3,i3);
    complex c4(r4,i4);
    c3.multiply(c4);
    return 0;
}