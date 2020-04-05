#include <iostream>
#include <cstdlib>
int main(){
  
  std::cout << "MAGIC 8-BALL:\n\n";
  srand(time(NULL));
  int answer = std::rand() % 10;
  // std::cout << answer;
  
  switch(answer){
    case 0:
      std::cout << "It is certain.";
      break;
    case 1:
      std::cout << "It is decidedly so.";
      break;
    case 2:
      std::cout << "Without a doubt.";
      break;
    case 3:
      std::cout << "Yes - definitely.";
      break;
    case 4:
      std::cout << "You may rely on it.";
      break;
    case 5:
      std::cout << "Signs point to yes.";
      break;
    case 6:
      std::cout << "Better not tell you now.";
      break;
    case 7:
      std::cout << "Concentrate and ask again.";
      break;
    case 8:
      std::cout << "My sources say no.";
      break;
    case 9:
      std::cout << "Very doubtful.";
      break;
    default:
      std::cout << "Iwu onye Eberibe :)";
      break;
  }
}