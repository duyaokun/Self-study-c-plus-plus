#include "SeqList.h"
#include <cstdio>

void SeqList::Joseph(std::vector<SeqList>& c)
{
  using namespace std;
  int m, star, i, number, outCount;
  cout << "请输入间隔数m(m<=20)";
  cin >> m;

  while(m > 20)
  {
    cout << "间隔太大，请重新输入:";
    cin >> m;
  }

  cout << "从第几个人的位置开始报数(不能大于" << c.size() << ")";
  cin >> star;

  while(star > c.size())
  {
    cout << "开始位置大于人数，请重新输入：";
    cin >> star;
  }

  cout << "准备输入名字" << endl;
  getchar(); //消除回车干扰

  // 输入参加游戏人的名字
  char s[10];

  for(i = 0; i < c.size(); ++i)
  {
    cout << "第" << i + 1 << "个人的名字：";
#if _MSC_VER < 1400
    gets(s);
#else
    gets_s(s, 10);
#endif
    c[i].SetName(s);
  }

  i = (star - 1) - 1; // 为方便编程，从规定开始报数处再减一作为计数依据

  vector<SeqList>::iterator p;
  p = c.begin();
  int length = c.size();

  for(outCount = 1; outCount <= length; ++outCount)
  {
    number = 0; //报数

    while(number < m)
    {
      ++i;

      if(i == c.size())   //到终点，返回到第一个位置计数
      {
        i = 0;
      }

      ++number;
    }

    if(outCount == length) { break; }

    c[i].DispName(); //输出出圈人的信息
    cout << ",";
    c.erase(p + i);//删除出圈人的记录
    --i;//调整计数位置初始值
  }

  //break语句跳转至此处，输出最后列的编号
  c[i].DispName();
  cout << endl;
}