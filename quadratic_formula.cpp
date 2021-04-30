#include <iostream>
#include <cmath>

int main() {
  
  //values of the quadratic equation
  double a;
  double b;
  double c;

  //user input
  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  //different roots
  double root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  double root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

  //output different roots
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
  
}
