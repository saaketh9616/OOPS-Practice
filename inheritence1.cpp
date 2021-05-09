#include<bits/stdc++.h>
using namespace std;

class vehicle{
    int maxspeed;
protected:
    int numoftyres;
public:
    string color;
    vehicle(){
        maxspeed=0;
        numoftyres=0;
        cout<<"Constructor_vehicle"<<endl;
    }
    vehicle(int a){
        maxspeed=a;
        cout<<"Parametrized Constructor"<<endl;
    }
    ~vehicle(){
        cout<<"destructor_vehicle"<<endl;
    }
};

class car:public vehicle{
public:
    int numgears;
    car(int x):vehicle(x){
        cout<<"Constructor_car"<<endl;
    }
    void abcd(){
        numoftyres+=1;
    }
    void bcde(){
        color="blue";
    }
    void print(){
        cout<<numoftyres<<endl;
        cout<<color<<endl;
    }
    ~car(){
        cout<<"Destructor_car"<<endl;
    }
};


int main(){
    // vehicle b;
    // b.numoftyres=10;//protected also cannot be accesed ouside the class and 
    // main and can only be accessed in child(derived) classes.
    int h;
    cin>>h;
    car a(h);
    a.abcd();
    a.bcde();
    a.print();
    return 0;
}