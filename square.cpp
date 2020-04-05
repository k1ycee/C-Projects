int main() {
  
  int i;
  int stop;
  int square = 0;
  
  // Write a while loop here:

  std::cout << "Where do you want the square to end: ";
  std::cin >> stop;
  
  while (i < stop+1){
    square = i*i;
     std::cout << i << " " << square << "\n";
    i++;
  }