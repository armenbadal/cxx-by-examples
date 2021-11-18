#include <iostream>

int main()
{
  std::cout << "Շրջանագծի շառավիղը. ";
  double radius = 0.0;
  std::cin >> radius;

  std::cout << "Քառակուսու կողմը. ";
  double side = 0.0;
  std::cin >> side;

  if( 2 * radius <= side )
    std::cout << radius << " շառավղով շրջանը տեղավորվում է "
              << side << " կողմով քառակուսու մեջ" << std::endl;

  if( side * side <= 2 * radius * radius )
    std::cout << side << " կողմով քառակուսին տեղավորվում է "
              << radius << " շառավղով շրջանի մեջ" << std::endl;
}
