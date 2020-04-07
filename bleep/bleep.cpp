#include <iostream>
#include <string>
#include "functions.hpp"

int main(){
    std::string word = "broccoli";
    std::string text = "Rolling out some broccoli for you know the wha ;), do some nasty broccoli stuff.";

    bleep(word, text);

    for (int i = 0; i < text.size(); i++){

        std::cout << text[i];
    }

    std::cout << "\n";
}
