/*
 * Arrays_Introduction.cpp
 *
 * Created on: Jan 23, 2016
 * Author: Luke
 */

#include <iostream>

int ROmain() {

	int a;
	int total;

	std::cin >> total; //allows user to chose amount of slots for the array

	int arr[total]; //Creates the array

	for (a = 0; a < total; a++) {

		std::cin >> arr[a]; //Allows user input for the array

	}

	for (a = total - 1; a >= 0; a--) {  //Once array is done, it reverses it

		std::cout << arr[a];

		if (a != 0) { //for adding a space after each int, except the last

			std::cout << " ";

		}

	}

	return 0;
}
