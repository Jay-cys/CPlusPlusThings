/* 重载++的时钟.cpp */
/*
设计一个时钟类，能够记录时、分、秒，重载它的++运算符，每执行一次++运算，加时1秒，但要使计时过程能够自动进位。
*/
#include <iostream>
using namespace std;
class Time {
public:
  Time(int h = 0, int m = 0, int s = 0) {
    hour = h;
    minute = m;
    second = s;
  }
  Time operator++();    // 前置++
  Time operator++(int); // 后置++
  void showTime() {
    cout << "当前时间为：" << hour << ":" << minute << ":" << second << endl;
  }

private:
  int hour, minute, second;
};
// 第一个Time指返回类型，第二个Time指作用域
Time Time::operator++(int n) {
  Time tmp = *this;
  ++(*this);
  cout << "(n)" << endl;
  return tmp;
}
Time Time::operator++() {
  ++second;
  if (second == 60) {
    second = 0;
    ++minute;
    if (minute == 60) {
      minute = 0;
      hour++;
      if (hour == 24) {
        hour = 0;
      }
    }
  }
  cout << "()" << endl;
  return *this;
}

int main(int argc, char const *argv[]) {
  Time t(23, 59, 59);
  ++t;
  t.showTime();
  (t++).showTime();
  t.showTime();

  return 0;
}
