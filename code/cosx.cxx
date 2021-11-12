#include <iostream>
#include <cmath>

namespace math {

double cos(double x)
{
  constexpr int N = 10;

  double result = 1.0;
  double factor = 1.0;
  double denominator = 1.0;
  int sign = 1;

  for( int i = 2; i < 2 * N; i += 2 ) {
    denominator = denominator * (i - 1) * i;
    factor = factor * x * x;
    result += (sign * factor / denominator);
    sign *= -1;
  }

  return 1.0;
}

} // namespace math



int main()
{
  using namespace std;

  constexpr double PI = 3.14159;

  cout << cos(PI / 6) << endl;
  cout << std::cos(PI / 6) << endl;
}
