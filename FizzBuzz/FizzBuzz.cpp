/*
 * FizzBuzz.cpp
 *
 *  Created on: Jan 22, 2016
 *      Author: Luke
 */


#include <iostream>
#include <windows.h>


int main(){

int x;

	for(x = 1; 100>=x; x++){

		if(x % 3 == 0 && x % 5 == 0){
			std::flush(std::cout) << "FizzBuzz" << std::endl;

		}

		else
			if (x % 3 == 0){
				std::flush(std::cout) << "Fizz" << std::endl;

			}

			if (x % 5 == 0){
				std::flush(std::cout) << "Buzz" << std::endl;

			}

			else
				if (x % 5 !=0 && x % 3 != 0){
				std::flush(std::cout) << x << std::endl;

				}
		Sleep(100);
	}



}
