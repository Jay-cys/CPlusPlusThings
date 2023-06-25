/* 重载()的时钟.cpp */
#include <iostream>
using namespace std;
class Time {
private:
  int hh, mm, ss;

public:
  Time(int h = 0, int m = 0, int s = 0) : hh(h), mm(m), ss(s) {cout << "默认构造函数" << endl;}
  void operator()(int h, int m, int s) {
    hh = h;
    mm = m;
    ss = s;
    cout << "()重载" << endl;
  }
  void ShowTime() { cout << hh << ":" << mm << ":" << ss << endl; }
};
int main() {
  Time t1(12, 10, 11);
  t1.ShowTime();
  t1.operator()(23, 20, 34);
  t1.ShowTime();
  t1(10, 10, 10); // 调用操作符()重载
  t1.ShowTime();
  
}
