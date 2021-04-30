#include <iostream>

int main() {
  
  //different currencies
  double pesos;
  double reais;
  double soles;
  double dollars;

  //questions
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazillian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Sol: ";
  std::cin >> soles;

  dollars = (0.05 * pesos) + (0.18 * reais) + (0.27 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";
  
}