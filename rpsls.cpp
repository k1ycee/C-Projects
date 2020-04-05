#include <iostream>
#include <stdlib.h>
/*
Making a rock paper scissors game wow this is would be more interesting cos am adding lizard and spock
*/

int main(){
  srand(time(NULL));
  int computer = rand() % 5 + 1;
  
  int user = 0;
  
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) lizard\n";
  std::cout << "5) spock\n";
  std::cout << "shoot! \n";
  std::cout << "Choose: ";
  std::cin >> user;
  
  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;
  std::cout << "computer: " << computer << "\n\n";
  
  if (user == computer){
    std::cout << "Tie\n";
  }
  else if (user == 2 && computer == 1){
    std::cout << "You win\n";
  }
  else if (user == 3 && computer == 1){
    std::cout << "You lose\n";
  }
  else if (user == 2 && computer == 3){
    std::cout << "You lose\n";
  }
  else if (user == 3 && computer == 2){
    std::cout << "You win\n";
  }
  else if (user == 4 && computer == 2){
    std::cout << "You win\n";
  }
  else if (user == 4 && computer == 3){
    std::cout << "You lose\n";
  }
  else if (user == 4 && computer == 5){
    std::cout << "You win\n";
  }
  else if (user == 4 && computer == 1){
    std::cout << "You lose\n";
  }
  else if (user == 5 && computer == 1){
    std::cout << "You win\n";
  }
  else if (user == 5 && computer == 2){
    std::cout << "You lose\n";
  }
  else if (user == 5 && computer == 3){
    std::cout << "You win\n";
  }
  else if (user == 5 && computer == 4){
    std::cout << "You lose\n";
  }
  else if (user == 3 && computer == 5){
    std::cout << "You lose\n";
  }
  else if (user == 3 && computer == 4){
    std::cout << "You win\n";
  }
  else if (user == 2 && computer == 4){
    std::cout << "You lose\n";
  }
  else if (user == 2 && computer == 5){
    std::cout << "You win\n";
  }
}