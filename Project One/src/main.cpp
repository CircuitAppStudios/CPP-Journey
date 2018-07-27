#include <iostream>

#include <cmath>

#include "Math.h"

int main(){

    int input;

    float result = 0;

    std::cout << "Hello World" << std::endl;

    std::cin >> input;

    result = input / 2 * Math::pow(input, 2);
    result /= 6;

    float roundNum = 0;
    roundNum = Math::roundToTenth(result);

    std::cout << "The Final Result rounded to the nearest tenth is " << roundNum << std::endl;
    std::cout << "The Final Result rounded to the nearest int is " << std::round(result) << std::endl;

    return 0;
}