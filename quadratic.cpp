#include <iostream>
#include <cmath>

int main() {
//   This a quadratic equation solving situation here 
  
//  These are some needed inputs 
  double a;
  double b;
  double c;
  
// User Input
  std::cout << "Enter a: ";
  std::cin >> a;
  
  std::cout << "Enter b: ";
  std::cin >> b;
  
  std::cout << "Enter c: ";
  std::cin >> c;
// Answer Variables 
  double root1 , root2;
// Solvings 
  root1 =  (-b + std::sqrt(b*b - 4*a*c))/(2*a);
  root2 =  (-b - std::sqrt(b*b - 4*a*c))/(2*a);
// Outputting answers
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
  
  
}