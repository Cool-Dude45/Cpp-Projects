#include <iostream>
int main() {

    //variables of the game
    int choice1;
    int choice2;
    int choice3;

    //Plot begins 
    std::cout << "It is a new year being in school and it is your first year being in high-school. While first entering campus, you feel excited, but nervous at the same time. You have multiple thoughts about how classes are going to be and about who you are going to meet. When you looked at your schedule, you realized that your first class was math. During your math class, you realize that the teacher is really nice and seems friendly? What do you do? \n";
    std::cout << "Enter 1 if you want to ask questions to the teacher about the school and maybe even for some advice. \n";
    std::cout << "Enter 2 if you don't want to say anything and just sit and listen to the lesson. \n";

    std::cin >> choice1;

    //first switch case
    switch (choice1) 
    {

        case 1:
            std::cout<< "The teacher was glad enough to guide you about some of the basics in being in high-school and shares some tips based on students over the past years. \n";
            break;
        case 2:
            std::cout << "You found the class to be interesting and easy. Even though the teacher was friendly, you didn't san anything. However, that is understandable because this was your first day in a brand new school.\n";
            break;
        default:
            std::cout << "Invalid input. THE END\n";
            break;
    }

    //Second Part of the Plot
    std::cout << "As time goes on, you worked really hard in school and you did really well in your school exams. At one point, you decided to try another hobby. Do you invest your time in another hobby or do you shy out from it?\n";
    std::cout << "Enter 1 if you decide to tackle another hobby\n";
    std::cout << "Enter 2 if you decided to opt up because you were too lazy.\n";

    std::cin >> choice2;

    //second switch statement
    switch (choice2)
    {
    case 1:
        std::cout << "After becoming invested in another hobby, you realized that you realized that you were capable of more things other than school. You use this skill to even get scholarships to many colleges and also build lots of connections across different people due to your interest.\n";
        break;
    case 2:
        std::cout << "As high-school went on, you became really lazy and didn't bother exploring anything other than school work. Even though you had setllar grades, you recieved little to no scholarships from very few colleges. This was because of your laziness.\n";
    default:
        std::cout << "Invalid input. THE END\n";
        break;
    }

    //Last part of the story
    std::cout << "You are nearing the end of high-school and some friends peer-pressure into partying and taking drugs for popularity. Do you give in to the pressure or do you resist and keep your goals in mind? \n";
    std::cout << "Enter 1 if you decide to give in to the temptation...\n";
    std::cout << "Enter 2 if you decide to keep your goals in your mind and resist the pressure of partying\n";

    std::cin >> choice3;

    switch (choice3)
    {
    case 1:
        std::cout << "During the party, you get arrested because some drugs enter in your possession during the party without your knowledge and your college scholarships gets revoked. Your life begins to go downhill from there just because of that one decision. GAME END.\n";
        return 0;
        break;
    case 2:
        std::cout << "Congradulations on resisting the temptation. Because of this, you go to the college of your dreams and get the job that you have always been dreaming off. Everything goes uphill and you eventually become a millionaire. Congradulations!\n";
    default:
        std::cout << "Invalid input. THE END\n";
        return 0;
        break;
    }


}