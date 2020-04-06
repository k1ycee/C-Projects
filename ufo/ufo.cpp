#include <iostream>
#include "ufo_functions.h"

int main(){

    greet();

    std::string codeword = "Professor";
    std::string answer = "_________\n";

    int misses = 0;
    char letter;
    while (codeword != answer && misses < 7){
        std::vector<char> incorrect;
        bool guess = false;
        display_misses(misses);
        display_status(incorrect, answer);
        std::cout << "Please enter your guess: \n";
        std::cin >> letter;
        for (int c=0; c < codeword.length(); c++){
            if(letter == codeword[c]){
                answer[c] = letter;
                guess = true;
            }
        }
        if(guess){
            std::cout << "Correct! You're doing it genius\n";
        }
        else{
            std::cout << "Incorrect! Tractor beam drags your friend closer";
            incorrect.push_back(letter);
            misses++;
        }
        
        guess = false;
    }
    end_game(answer, codeword);
    return 0;
}