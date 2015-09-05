#include <iostream>

template<class T>
void swap(T& number1, T& number2)
{
  T tmpNumber = number1;
  number1 = number2;
  number2 = tmpNumber;
}

template<class T>
void sort(T& number1, T& number2, T& number3)
{
  // 第一个数改为最小数
  if(number1 > number2)
  {
    swap(number1, number2);
  }

  if(number1 > number3)
  {
    swap(number1, number3);
  }

  // 比较后两个数
  if(number2 > number3)
  {
    swap(number2, number3);
  }
}

int main(int argc, char const* argv[])
{
  const int NUMBER_SIZE(3);
  int* numbers = new int[NUMBER_SIZE];// 动态分配能存入10个int值的内存
  memset(numbers, 0, NUMBER_SIZE * sizeof(int));

  using namespace std;
  cout << "请输入" << NUMBER_SIZE << "个整数:" << endl;

  // 从键盘输入数值
  for(int i = 0; i < NUMBER_SIZE; ++i)
  {
    cout << "[" << i + 1 << "]";
    cin >> numbers[i];
  }

  sort(numbers[0], numbers[1], numbers[2]);
  cout << "排序后：" << endl;

  for(int i = 0; i < NUMBER_SIZE; ++i)
  {
    cout << numbers[i] << "\t";
  }

  cout << endl;

  delete numbers;// 删除动态分配的内存
  return 0;
}