/*
* Strings.cpp
*
*  Created on: Jan 25, 2016
*      Author: Luke
*/

#include <iostream>
#include <string> //Used for the length functions used

int MYMAINmain(){

    std::string lettersina; //The letters a input
    std::string lettersinb;    //The letters b input
    std::string lettersinall; //Letters memory for b
    std::string lettermema; //Letters memory for a

    std::cin >> lettersina; //Input for a
    std::string lettersa (lettersina); //Makes an array for lettersa
    std::cin >>lettersinb; //Input for b
    std::string lettersb (lettersinb); //Makes an array for lettersb
    std::cout << lettersa.length() << " " << lettersb.length() << std::endl; //Prints the length of lettersa and lettersb (in bytes)

    lettersinall = lettersina +lettersinb; //Adds lettersina to lettersinb to make the overall output

    std::cout << lettersinall << std::endl; //Prints lettersinall

    lettersa[0] = lettersinb.at(0); //Replaces the 1st letter of lettersinb with the 1st letter of lettersina
    lettersb[0] = lettersina.at(0); //Replaces the 1st letter of lettersina with the 1st letter of lettersinb in b

    std::cout << lettersa << " "; //Prints the new replaced version of lettersa and a space to seperate
    std::cout << lettersb; //Prints the new replace version of lettersb

    return 0; //Terminates program, not needed, but looks nice
}
