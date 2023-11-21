#include <iostream>

int main() {
  int n;

  std::cout << "Podaj wielkosc" << std::endl;
  std::cin >> n;

  std::cout << "---------------" << std::endl;

  for(int i = 0; i < n; i++) {
    for(int j = n-i-1; j > 0; j--) {
      std::cout << " ";
    }
    for(int k = 0; k <= i; k++) {
      std::cout << i+1;
    }
    std::cout << std::endl;
  }

  std::cout << "---------------" << std::endl;

  return 0;
}
