/*
* Functions.cpp
*
*  Created on: Jan 23, 2016
*      Author: Luke
*/

#include <iostream>
#include <cstdio>


int CHOWmain(){
    int a, b, c, d;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    if(a>b && a>c && a>d){

        std::cout << a;
    }

    if(b>a && b>c && b>d){

        std::cout << b;
    }

    if(c>a && c>b && c>d){

        std::cout << c;
    }

    if(d>a && d>b && d>c){

        std::cout << d;
    }

    return 0;
}

