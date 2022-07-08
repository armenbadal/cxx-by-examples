#include <iostream>

int main()
{
    using namespace std;

    unsigned long int grains = 0;
    for( unsigned long int i = 0; i < 64; ++i ) {
        grains += (1 << i);
    }

    cout << grains << endl;
}
