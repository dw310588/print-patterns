#include <iostream>

int main() {
  int n;

  std::cout << "Podaj wielkosc" << std::endl;
  std::cin >> n;

  std::cout << "---------------" << std::endl;

  char c = 'a';
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= i; j++) {
      std::cout << c;
    }
    std::cout << std::endl;
    c++;
  }

  std::cout << "---------------" << std::endl;

  return 0;
}
