#include <iostream>
#include <vector>

int main(){
  std::vector<int>number = {2,4,3,6,1,9};
  int evensum = number[0]+number[1]+number[3];
  int prsum = number[2]*number[4]*number[5];
  
  std::cout << "Sum of even numbers is " << evensum << "\n";
  std::cout << "Product of odd numbers is " << prsum << "\n";
}