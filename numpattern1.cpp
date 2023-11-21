#include <iostream>

int main() {
  int n;

  std::cout << "Podaj wielkosc" << std::endl;
  std::cin >> n;

  std::cout << "---------------" << std::endl;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= i; j++) {
      std::cout << i+1;
    }
    std::cout << std::endl;
  }

  std::cout << "---------------" << std::endl;

  return 0;
}
