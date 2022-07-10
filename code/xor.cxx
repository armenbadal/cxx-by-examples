#include <iostream>

bool xor(bool a, bool b)
{
  bool x = !a && b;
  bool y = a && !b;
  return x || y;
}

int main()
{

}
