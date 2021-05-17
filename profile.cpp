#include <iostream>
#include "profile.hpp"

std::string Profile::view_profile() {

  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns;


  return bio;

}

void Profile::add_hobby(std::string new_hobby) {

  hobbies.push_back(new_hobby); 
  std::cout << new_hobby << "\n";

}

