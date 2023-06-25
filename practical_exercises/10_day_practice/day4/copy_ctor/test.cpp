#include <iostream>

using namespace std;

class A{
public:
    A() {cout << "默认构造" << endl;};
    A(A&) {cout << "拷贝构造" << endl;};
    A& operator=(A) {cout << "赋值构造" << endl;};
    ~A(){};
};

int main(){
    A a,b,d;
    A c = a;
    d = a;
}