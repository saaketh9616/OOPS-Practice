#include<bits/stdc++.h>
using namespace std;
class A{
public:
    A(){
        cout<<"Default Constructor of A invoked"<<endl;
    }
    ~A(){
        cout<<"Default Destructor of A invoked"<<endl;
    }
    void print(){
        cout<<"Print function of Class A"<<endl;
    }

};
class B:virtual public A{
public:
    B(){
        cout<<"Default Constructor of B invoked"<<endl;
    }
    ~B(){
        cout<<"Default Destructor of B invoked"<<endl;
    }
};
class C:virtual public A{
public:
    C(){
        cout<<"Default Constructor of C invoked"<<endl;
    }
    ~C(){
        cout<<"Default Destructor of C invoked"<<endl;
    }
    void print(){
        cout<<"Print function of Class C"<<endl;
    }
};
class D:public B,public C{
public:
    D(){
        cout<<"Default Constructor of D invoked"<<endl;
    }
    ~D(){
        cout<<"Default Destructor of D invoked"<<endl;
    }
    void print(){
        cout<<"Print Fuction of Class D"<<endl;
    }
};
int main() {
    D saaketh;
    cout<<endl;
    saaketh.C::print();//if no print in d
    saaketh.B::print();//if no print in d
    saaketh.print();//if D has print
    cout<<endl;
    return 0;
}