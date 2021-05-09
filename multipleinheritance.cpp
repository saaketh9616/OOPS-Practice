#include<bits/stdc++.h>
using namespace std;
class a{
    string name;
public:
    void print(){
        cout<<"Class A"<<endl;
    }
};
class b{
    int y;
public:
    void print(){
        cout<<"Class B"<<endl;
    }
};
class c:public a,public b{
public:
    void print(){
        cout<<"Class C"<<endl;
    }
};
int main() {
    c x;
    x.b::print();
    x.print();
    return 0;
}