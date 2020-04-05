#include <iostream>

int main() {
//   This is currency exchange happening here!
  
// Currencies we'll be needing 
  double pesos,reais,soles;
// Currency we are converting to
  double dollars;
// User Inputs  
  std::cout << "Enter number of Colombian Pesos:";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais:";
  std::cin >> reais;
  
  std::cout << "Enter number of Peruvian Soles:";
  std::cin >> soles;
  
// 1 peso = 0.00025 USD
  double conversion_rate1 = 0.00025;
// 1 reais = 0.19 USD
  double conversion_rate2 = 0.19;
// 1 sol = 0.29 USD
  double conversion_rate3 = 0.29;
  dollars = (conversion_rate1*pesos)+(conversion_rate2*reais)+(conversion_rate3*soles);
  
  std::cout << "US Dollars = $" << dollars << "\n";
  
}