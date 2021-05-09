#include<bits/stdc++.h>
using namespace std;
class A{
    int n;
public:
    virtual void print()=0;
};
class B:public A{
    int x;
public: 
    void print(){
        cout<<"Done"<<endl;
    }
};
int main() {
    // A a;// Error as the class is incomplete(abstract)
    B b;
    b.print();
    return 0;
}