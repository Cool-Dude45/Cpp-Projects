#include <iostream>
#include <string>
#include <vector>
#include "ufo_functions.hpp"

int main() {

  greet();

  //variables
  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;

  while (answer != "codeword" && misses < 7) {

    
    display_misses(misses); // Displays what you miss

    //all incorrect answers
    display_status(incorrect, answer);
    std::cout << "Please enter your guess: ";
    std::cin >> letter;


    //correct answer
    for (int i = 0; i < codeword.length(); i++) {

      if (letter == codeword[i]) {

        answer[i] = letter;
        guess = true;        

      }

    }

    //outcomes
    if (guess) {

      std::cout << "Correct!";

    } else {


      incorrect.push_back(letter);
      misses++;

    }



    //resets to false
    guess = false;

    //end of the game outcome
    end_game(answer, codeword);
    
  }

 


}
