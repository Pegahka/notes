#include <iostream>

void increment(int a[2]) {
  a[0]++;
  a[1]++;
}

void increment2(int a[]) {
  a[0]++;
  a[1]++;
}

void increment3(int* a) {
  a[0]++;
  a[1]++;
}

int main() {
  int a[2] = {2, 3};

  std::cout << "a[0] = " << a[0] << ", " << "a[1] = " << a[1] << std::endl;
  increment(a);
  std::cout << "a[0] = " << a[0] << ", " << "a[1] = " << a[1] << std::endl;
  increment2(a);
  std::cout << "a[0] = " << a[0] << ", " << "a[1] = " << a[1] << std::endl;
  increment3(a);
  std::cout << "a[0] = " << a[0] << ", " << "a[1] = " << a[1] << std::endl;
  
  return 0;
}
