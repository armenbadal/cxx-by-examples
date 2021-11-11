#include <iostream>

bool xor(boola a, bool b)
{
  bool x = !a && b;
  bool y = a && !b;
  return x || y;
}

int main()
{

}
