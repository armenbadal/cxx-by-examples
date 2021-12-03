#include <iostream>

int main()
{
  std::cout << "Ներմուծեք նոտայի տառը. ";
  char note;
  std::cin >> note;

  switch( note ) {
    case 'C':
      std::cout << "դո" << std::endl;
      break;
    case 'D':
      std::cout << "ռե" << std::endl;
      break;
    case 'E':
      std::cout << "մի" << std::endl;
      break;
    case 'F':
      std::cout << "ֆա" << std::endl;
      break;
    case 'G':
      std::cout << "սոլ" << std::endl;
      break;
    case 'A':
      std::cout << "լա" << std::endl;
      break;
    case 'B':
      std::cout << "սի" << std::endl;
      break;
    default:
      std::cerr << "Այդպիսի նոտա չկա։" << std::endl;
  }

  return 0;
}
