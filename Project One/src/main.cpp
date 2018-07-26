#include <iostream>

#include <cmath>

#include "Math.h"

int main(){

    int input;

    double result = 0;

    std::cout << "Hello World" << std::endl;

    std::cin >> input;

    result = ((input / 2) * (Math::pow(input, 2))) / 6;

    double roundnum = std::round(result * 10)/10;

    std::cout << "The Final Result rounded to the nearest tenth is " << roundnum << std::endl;
    std::cout << "The Final Result rounded to the nearest int is " << std::round(result) << std::endl;

    return 0;
}