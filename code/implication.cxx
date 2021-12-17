#include <iostream>

int main()
{
    char ac = '\0', bc = '\0';
    std::cout << "Ներմուծեք a-ի և b-ի արժեքները. ";
    std::cin >> ac >> bc;

    const bool a = ac == 'T'
    const bool b = ac == 'T';

    const bool a_imp_b = (!a && !b) || (!a && b) || (a && b);
    std::cout << ac << " ⇒ " << bc << " = " << a_imp_b << std::endl;
}
