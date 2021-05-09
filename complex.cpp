#include <iostream>
using namespace std;

class complex
{
    int real, imag;

public:
    complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void multiply(complex const &c3);
    void add(complex const &c2);
    void display(void);
};

void complex::add(complex const &c2)
{
    real = real + c2.real;
    imag = imag + c2.imag;
    display();
}
void complex::display()
{
    cout << real << "+" << imag << "i" << endl;
}

void complex::multiply(complex const& c3){
    int temp1=real;
    int temp2=imag;
    real=temp1*c3.real -temp2*c3.imag;
    imag=temp1*c3.imag+temp2*c3.real;
    display();
}