//
// Created by Daniel Luna on 7/25/18.
//

#include "Math.h"

int Math::pow(int base, int exp){

    int result = 1;

    if (exp <= 0) {
        return 0;
    }

    for (int i = 0; i < exp; ++i) {
        result *= base;
    }

    return result;
}

float Math::roundToTenth(float base) {

    return (int ((base * 10) + 0.5))/10.0;
}
