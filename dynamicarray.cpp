#include<bits/stdc++.h>
using namespace std;

class da{
    int *arr;
    int top;
    int capacity;
public:
    da(){
        arr = new int[5];
        top=-1;
        capacity=5;
    }
    void add(int a){
        if(top==capacity-1)
        {
            int *newarr = new int[capacity*2];
            for(int i=0;i<capacity;i++)
            {
                newarr[i]=arr[i];
            }
            delete [] arr;
            arr=newarr;
            capacity*=2;
        }
        top++;
        arr[top]=a;
    }
    void print();
    int get(int i);
    void add(int i,int data);
    da(da const &d){
        // this->arr=d.arr;//copy constuctor does this
        this->arr =new int[d.capacity];
        this->top=d.top;
        this->capacity=d.capacity;
        for (int i = 0; i <=top; i++)
        {
            this->arr[i]=d.arr[i];
        }
    }
    void operator=(da const &d){
        this->arr =new int[d.capacity];
        this->top=d.top;
        this->capacity=d.capacity;
        for (int i = 0; i <=top; i++)
        {
            this->arr[i]=d.arr[i];
        }
    }
};


void da::print(){
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int da::get(int i){
    if(i<=top)    return arr[i];
    return -1;
}

void da::add(int i,int data){
    if(i<=top)
    {
        arr[i]=data;
    }
    else if(top==i-1){
        add(data);
    }
    return;
}