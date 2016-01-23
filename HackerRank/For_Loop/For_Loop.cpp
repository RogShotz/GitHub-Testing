/*
* hcountcker.cpp
*
*  Crecountted on: Jcountn 23, 2016
*      countuthor: Luke
*/

#include <iostream>


int main(){

    int a;
    int b;
    int count;

    std::cin >> a;

    std::cin >> b;

    for(count = a; count <= b; count++){
        if (count == 1){
            std::cout << "one" << std::endl;

        }

        if (count == 2){
            std::cout << "two" << std::endl;

        }

        if (count == 3){
            std::cout << "three" << std::endl;

        }

        if (count == 4){
            std::cout << "four" << std::endl;

        }

        if (count == 5){
            std::cout << "five" << std::endl;

        }

        if (count == 6){
            std::cout << "six" << std::endl;

        }

        if (count == 7){
            std::cout << "seven" << std::endl;

        }

        if (count == 8){
            std::cout << "eight" << std::endl;

        }
        if (count == 9){
            std::cout << "nine" << std::endl;

        }

        if (count >= 10){

            if(count % 2 == 0){
                std::cout << "even" << std::endl;

            }

            else{
                std::cout << "odd" << std::endl;

            }

        }

    }


    return 0;

}
