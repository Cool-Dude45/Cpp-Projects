/*
Rock Paper Scissors
*/

#include <iostream>
#include <stdlib.h>

int main() {

  srand (time(NULL));
 
  int computer = rand() % 3 + 1;
  
  int user = 0;

  //rock paper scissors question
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  
  std::cout << "shoot! ";
  std::cin >> user;

  //outcome: user = rock
  if (user == 1) {

    if (computer == 1) {

      std::cout << "Tie!";

    } else if (computer == 2) {

      std::cout << "You Lose";

    } else if (computer == 3) {

      std::cout << "You Win";

    }

  }

  //outcome: user == paper
    if (user == 2) {

    if (computer == 1) {

      std::cout << "You Win";

    } else if (computer == 2) {

      std::cout << "You Tie";

    } else if (computer == 3) {

      std::cout << "You Lose";

    }

  }

  //outcome: user = scissors

    if (user == 3) {

    if (computer == 1) {

      std::cout << "You Lose";

    } else if (computer == 2) {

      std::cout << "You Win";

    } else if (computer == 3) {

      std::cout << "Tie";

    }

  }





}