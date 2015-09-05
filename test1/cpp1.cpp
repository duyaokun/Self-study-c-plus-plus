#include <iostream>

using namespace std;

#ifndef NUMBER_SIZE
#define NUMBER_SIZE 10 // 能输入整数的个数
#endif

int main(int argc, char const* argv[])
{
  int* numbers = new int[NUMBER_SIZE];// 动态分配能存入10个int值的内存
  memset(numbers, 0, NUMBER_SIZE * sizeof(int));

  cout << "请输入" << NUMBER_SIZE << "个整数:" << endl;

  // 从键盘输入数值
  for(int i = 0; i < NUMBER_SIZE; ++i)
  {
    cout << "[" << i + 1 << "]";
    cin >> numbers[i];
  }

  // 计算和
  int sum = 0;

  for(int i = 0; i < NUMBER_SIZE; ++i)
  {
    sum += numbers[i];
  }

  cout << "这些数之和为:" << sum << endl;

  // 计算最小值
  int minNumber = numbers[0];

  for(int i = 1; i < NUMBER_SIZE; ++i)
  {
    if(numbers[i] < minNumber)
    {
      minNumber = numbers[i];
    }
  }

  cout << "这些数最小数为:" << minNumber << endl;

  delete numbers;// 删除动态分配的内存
  return 0;
}