#include <iostream>
 
int main() {

  //schools
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  //answers
  int answer1 = 0;
  int answer2 = 0;
  int answer3 = 0;
  int answer4 = 0;
 
  // The magic starts here
  std::cout << "The Sorting Hat Quiz!\n";

  //question1
  std::cout << "Q1) When I'm dead, I want people to remembver me as: \n\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";

  std::cin >> answer1;

  switch (answer1) {

    case 1:
      gryffindor++;
      break;
    case 2:
      hufflepuff++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      slytherin++;
      break;
    default:
      std::cout << "Invalid input\n";
      break;

  }

  //question 2
  std::cout << "Q2) Dawn or Dusk? \n\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";

  std::cin >> answer2;

  switch (answer2) {

    case 1:
      gryffindor++;
      ravenclaw++;
      break;
    case 2:
      hufflepuff++;
      slytherin++;
      break;
    default:
      std::cout << "Invalid input\n";
      break;
  }

  //question3
    std::cout << "Q1) Which kind of instrument most pleases your ear? \n\n";
    std::cout << "1) The violin\n";
    std::cout << "2) The trumpet\n";
    std::cout << "3) The piano\n";
    std::cout << "4) The drum\n";

    std::cin >> answer3;

    switch (answer3) {

    case 1:
      slytherin++;
      break;
    case 2:
      hufflepuff++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "Invalid input\n";
      break;

  }

  //question 4
  std::cout << "Q4) Which road tempts you most? \n\n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  std::cout << "3) The twisting, leaf-strewn path through woods\n";
  std::cout << "4) The cobbled street lined (ancient buildings)\n";

  std::cin >> answer4;

     switch (answer4) {

    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      gryffindor++;
      break;
    case 4:
      ravenclaw++;
      break;
    default:
      std::cout << "Invalid input\n";
      break;

  }

  //highest answer
  std::string house;
  int max = 0;
  std::cout << "Congrats, you have been selected into:\n";

  if (gryffindor > max) {
 
  max = gryffindor;
  house = "Gryffindor";
 
  }
  
  if (hufflepuff > max) {
  
    max = hufflepuff;
    house = "Hufflepuff";
  
  }
  
  if (ravenclaw > max) {
  
    max = ravenclaw;
    house = "Ravenclaw";
  
  }
  
  if (slytherin > max) {
  
    max = slytherin;
    house = "Slytherin";
  
  }
  
  std::cout << house << "!\n";
 
}