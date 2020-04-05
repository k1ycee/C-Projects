#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  std::string rev;
  int p = text.size() - 1;
  for(int j=0; j<p; j++){
    if(text[j] != text[p]){
      return false;
    }
    else{
      return true;
    }
  }
}


int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}