#include<iostream>
using namespace std;
class stu{
    int a;
    int b;
public:
    stu(){
        
    }
    int get1() const{
        return a;
    }
    int get2() const{
        return b;
    }
    void set1(int x){
        a=x;
    }
    void set2(int y){
        b=y;
    }
};
int main() {
    const stu r;
    // r.set1(10);
    // r.set2(20);
    cout<<r.get1()<<" "<<r.get2()<<endl;
    return 0;
}