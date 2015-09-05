#include "SeqList.h"

using namespace std;

int main(int argc, char const* argv[])
{
  int length = 0;
  cout << "请输入人数：";
  cin >> length;

  vector<SeqList> c(length);  //建立向量c
  SeqList game;               //类的实例
  game.Joseph(c);             //调用成员函数求解
  return 0;
}