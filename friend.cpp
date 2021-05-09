#include<bits/stdc++.h>
using namespace std;
void test();
class B{
public:
    void print();
};
class A{
    int n;
protected:
    int x;
public:
    A(){}
    A(int a,int b):n(a),x(b){}
    friend void B::print();
    friend void test();
    
}; 
void B::print(){
    A a;
    cin>>a.n;
    cin>>a.x;
    cout<<a.x+a.n<<endl;
}
void test(){
    A a;
    cout<<a.n+100<<" "<<a.x+100<<endl;
}
int main() {
    B b;
    b.print();
    test();
    return 0;
}