#include<bits/stdc++.h>
#include"dynamicarray.cpp"
using namespace std;

int main() {
    da arr;
    arr.add(1);
    arr.add(2);
    arr.add(3);
    arr.add(4);
    arr.add(5);
    arr.add(6);
    arr.add(7);
    arr.add(8);
    arr.print();
    int h=arr.get(8);
    cout<<h<<endl;
    arr.add(5,100);
    arr.add(8,100);
    arr.print();
    da newarr(arr);
    da j;
    j=arr;
    arr.add(0,200);
    arr.print();
    newarr.print();
    j.print();
    return 0;
}