#include <iostream>
#include "hello.h"

using namespace std;

template <typename T>
void print(const T& t, string name) {
    std::cout << name << endl << t << endl;
}


int main(int, char**)
{
  print(1, "int");
  Printer printer;
  printer.print("lol");
  return 0;
}
