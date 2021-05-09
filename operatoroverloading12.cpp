#include<iostream>
using namespace std;
class complex{
    int real;
    int imag;
public:
    complex(int real,int imag):real(real),imag(imag){}
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    const void operator+(complex const &c2){
        complex c3(0,0);
        c3.real=this->real+c2.real;
        c3.imag=this->imag+c2.imag;
        c3.display();
    }
    complex operator*(complex const &c2) const{
        int x=(this->real*c2.real)-(this->imag*c2.imag);
        int y=(this->real*c2.imag)+(this->imag*c2.real);
        complex c3(x,y);
        return c3;
    }
    bool operator==(complex const &c2) const{
        if(this->real==c2.real && this->imag==c2.imag)
        {
            return true;
        }
        return false;
    }
    complex& operator++(){
        this->real+=1;
        this->imag+=1;
        return *this;
    }
    complex operator++(int){
        complex n(this->real,this->imag);
        this->real+=1;
        this->imag+=1;
        return n;
    }
    complex& operator+=(int a){
        this->real=this->real+a;
        this->imag=this->imag+a;
        return *this;
    }
};
int main() {
    complex c(10,5);
    c.display();
    complex c1(10,5);
    c1.display();
    c+c1;
    complex c3=c*c1;
    c3.display();
    ++(++c3);
    c3++;
    (c3+=5)+=4;
    c3.display();
    complex c4=++(++c3);
    c4.display();
    complex c5=c4++;
    c5.display();
    if(c==c1)  cout<<"True"<<endl;
    else     cout<<"False"<<endl;
    return 0;
}

