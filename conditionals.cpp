#include <iostream>

int main() {
  
  std::cout << "Hi Little Mac, Welcome!";
  
  int x;
  double weight;
  
  std::cout << "To know your weight on \nfor Venus press 1\nfor Mars press 2\nfor Jupiter press 3\nfor Saturn press 4\nfor Uranus press 5\nfor Saturn press 5\nfor Neptune press 6\n";
  
  std::cout << "Which planet do you intend to go to: ";
  std::cin >> x;
  
  std::cout << "Enter your mass sir: ";
  std::cin >> weight;
  
  switch(x){
    case 1:
      weight = weight*0.78;
      break;
    case 2:
      weight = weight*0.39;
      break;
    case 3:
      weight = weight*2.65;
      break;
    case 4:
      weight = weight*1.17;
      break;
    case 5:
      weight = weight*1.05;
      break;
    case 6:
      weight = weight*1.23;
      break;
    default:
      std::cout << "Make a valid selection :)";
      break;
      }
  std::cout << "Your weight is: " << weight << " N\n";
}