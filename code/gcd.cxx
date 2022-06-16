#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  cout << "Ներմուծեք երկու դրական ամբողջ թվեր. ";
  int n = 0, m = 0;
  cin >> n >> m;

  while( n != m )
    if( n > m )
      n -= m;
    else
      m -= n;

  cout << "GCD(" << n << ", " << m << ") = " << n << endl;
}
