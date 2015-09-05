#ifndef SEQ_LIST_H
#define SEQ_LIST_H

#include <iostream>
#include <vector>

class SeqList
{
public:

  void DispName() const { std::cout << name; }

  void SetName(char name[]) { strcpy(this->name, name); }

  void Joseph(std::vector<SeqList>&);

private:

  char name[10];
};

#endif
