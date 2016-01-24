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

	std::cin >> total;

	int arr[total];

	for (a = 0; a < total; a++) {

		std::cin >> arr[a];

	}

	for (a = total - 1; a >= 0; a--) {

		std::cout << arr[a];

		if (a != 0) {

			std::cout << " ";

		}

	}

	return 0;
}
