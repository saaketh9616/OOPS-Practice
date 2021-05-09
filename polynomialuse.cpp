#include<bits/stdc++.h>
#include"polynomial.cpp"
using namespace std;

int main() {
    poly a;
    a.setcoeff(0,1);
    a.setcoeff(1,-3);
    a.setcoeff(4,4);
    a.setcoeff(6,3);
    poly b;
    b.setcoeff(0,5);
    b.setcoeff(4,4);
    b.setcoeff(2,6);
    b.setcoeff(6,-9);
    poly c=a-b;
    a.print();
    b.print();
    c.print();
    
    return 0;
}