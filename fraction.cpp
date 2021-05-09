#include<iostream>
using namespace std;

class fraction{
    int num;
    int den;

public:
    fraction(int num,int den){
        this->num=num;
        this->den=den;
    }
    void display() {
        cout<<num<<" / "<<den<<endl;
    }
    void add(fraction const &f2);
    void simplify();
    void multiply(fraction const &f2);
};

void fraction::add(fraction const &f2 ){
    fraction f3(0,1);
    int lcm=den*f2.den;
    f3.num=(int)(lcm/den)*(num) + (int)(lcm/f2.den)*(f2.num);
    f3.den=lcm;
    // f2.den=10;
    f3.simplify();
    f3.display();
}

void fraction::simplify(){
    int gcd=1;
    int x=min(num,den);
    for(int i=2;i<=x;i++)
    {
        if(num%i==0 && den%i==0)
        {
            gcd=i;
        }
    }
    num=(int)num/gcd;
    den=(int)den/gcd;
}

void fraction::multiply(fraction const &f2){
    this->num=this->num*f2.num;
    this->den=this->den*f2.den;
    this->simplify();
    this->display();
}