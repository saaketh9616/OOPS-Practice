#include<bits/stdc++.h>
using namespace std;
class A{
    int n;
public:
    virtual void print(){
        cout<<"print func of class A"<<endl;
    }
};

class B:public A{
    int x;
public:
    void print(){
        cout<<"print func of class B"<<endl;
    }
};
int main() {
    B b;
    A *ptr=&b;
    // ptr->print();//before writing virtual it will execute print function of A
    ptr->print();
    return 0;
}