#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  unsigned long int n = 0;
  cout << "Ներմուծեք ամբողջ թիվ. ";
  cin >> n;

  unsigned long int f0 = 1, f1 = 1;
  cout << f0 << ' ' << f1 << ' ';

  for( unsigned long int i = 2; i <= n; ++i ) {
    auto fn = f0 + f1;
    cout << fn << '\n';
    f0 = f1;
    f1 = fn;
  }

  cout << endl;
}
