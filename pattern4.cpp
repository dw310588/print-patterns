#include <iostream>

int main() {
  int n;

  std::cout << "Podaj rozmiar" << std::endl;
  std::cin >> n;

  std::cout << "---------------" << std::endl;

  for(int i = 0; i < n; i++) {
    for(int j = i; j > 0; j--) {
      std::cout << " ";
    }
    for(int k = n-i; k > 0; k--) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  std::cout << "---------------" << std::endl;

  return 0;
}
