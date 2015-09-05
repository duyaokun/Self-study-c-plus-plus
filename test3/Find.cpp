#include "Point.h"
#include <iostream>

int main(int argc, char const* argv[])
{
  Point points[3];

  using namespace std;
  cout << "请输入三个顶点:" << endl;

  // 从键盘输入顶点
  for(int i = 0; i < 3; ++i)
  {
    double x, y;
    cout << "[" << i + 1 << "]";
    cin >> x >> y;
    points[i].setX(x);
    points[i].setY(y);
    points[i].print();
  }

  cout << "第一条边长度：" << points[0].Distance(points[1]) << endl;
  cout << "第二条边长度：" << points[0].Distance(points[2]) << endl;
  cout << "第三条边长度：" << points[1].Distance(points[2]) << endl;
  return 0;
}