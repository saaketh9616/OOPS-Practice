#include<iostream>
using namespace std;
class s{
    int const a;
    const int b;
public:
    s(int a,int b):a(a),b(b){}
    void d(){
        cout<<a<<" "<<b<<endl;
    }
};
int main() {
    int c,d;
    cin>>c>>d;
    s h(d,c);
    h.d();
    return 0;
}