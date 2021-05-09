#include<bits/stdc++.h>
#define loop(i,a,b)       for(int i=a;i<b;++i)
using namespace std;

class poly{
    int *degree;
public:
    poly(){
        degree=new int[10];
        loop(i,0,10)
        {
            degree[i]=0;
        }
    }
    poly operator+(poly const &a){
        poly b;
        loop(i,0,10)
        {
            b.degree[i]=this->degree[i]+a.degree[i];
        }
        return b;
    }
    poly operator-(poly const &a){
        poly b;
        loop(i,0,10)
        {
            b.degree[i]=this->degree[i]-a.degree[i];
        }
        return b; 
    }
    poly(poly const &a){
        int* newarr= new int[10];
        loop(i,0,10)
        {
            newarr[i]=this->degree[i];
        }
    }
    void operator=(poly const &a){
        int *newarr= new int[10];
        loop(i,0,10)
        {
            newarr[i]=this->degree[i];
        }
    }
    void print(){
        loop(i,0,10)
        {
            if(degree[i]!=0)
            {
                cout<<degree[i]<<"x^"<<i<<" ";
            }
        }
        cout<<endl;
    }
    void setcoeff(int i,int a)
    {
        degree[i]=a;
    }
};

