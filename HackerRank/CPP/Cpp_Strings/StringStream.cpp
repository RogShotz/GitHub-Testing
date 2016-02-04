/*
* StringStream.cpp
*
*  Created on: Jan 27, 2016
*      Author: Luke
*/

#include <iostream>
#include <sstream> //For stringstream

int mainE() {

    std::string input; //String input
    int a; //Integer a

    char ch; //Reads any character

    std::cin >> input; //Recieves input
    std::stringstream ss(input); //Put input into a stringstream

    while ((ss >> std::ws).peek() != std::char_traits<char>::eof()) { //Peeks into the string, and if it does not see the EOF(End Of File) it will break the while loop.

    	ss >> a >> ch; //Gets a in string stream
        std::cout << a << std::endl; //Prints all of the input with no commas
    }

    return 0; //Not need, but makes it look nicer
}
