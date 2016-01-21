/*
 * Calculator.cpp
 *
 *  Created on: Jan 20, 2016
 *      Author: Luke
 */

#include "Calculator.h"


void Calculator::Addition(){

	int ainput;
	int binput;
	int answer;

	std::cout << "You are using addition, press enter after each input." << std::endl;
	std::cin >> ainput;

	std::cout << "+";
	std::cin >> binput;

	std::cout <<binput << "=";
	answer = ainput + binput;

	std::cout << answer;
}

