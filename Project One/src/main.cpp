#include <iostream>

static float pow(float base, int exp);
static int nearByInt(float x);

int main(){

    int test = 5;

    std::cout << "5 to the 2nd Power is: " << pow(5, 2) << std::endl;
    std::cout << "5 to the 3nd Power is: " << pow(5, 3) << std::endl;

    std::cout << "5 times 3.5 rounded to the nearest int is: " << nearByInt(5 * 3.5) << std::endl;
    std::cout << "4 times 3.1 rounded to the nearest int is: " << nearByInt(4 * 3.1) << std::endl;

    return 0;
}

static float pow(float base, int exp){

    float result = 1.0f;

    if (exp <= 0) {
        return 0;
    }

    for (int i = 0; i < exp; ++i) {
        result *= base;
    }

    return result;
}

static int nearbyint(float x){

    int result = 0;
    float tempResult = 0.0f;

    tempResult = pow(x, 1);

    int temp = (int)tempResult;

    temp %= 10;

    if(temp >= 5){
        result = (int)x + 1;
    }else{
        result = (int)x;
    }

    return result;
}