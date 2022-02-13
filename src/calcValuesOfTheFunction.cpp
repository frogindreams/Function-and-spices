#include <iostream>
#include <stdio.h>
#include <math.h>



void calcValues(float commencingValue) {
    const int endingValue = 4;
    float pieceOfTheInterval;
    float currentValue;
    float result;

    pieceOfTheInterval = (endingValue - commencingValue) / 9;
    currentValue = pieceOfTheInterval;
    for (int iter = 1; iter < 10; ++iter) {
        result = sin(currentValue) / currentValue;
        printf("\tvalue is %f\n", result);
        currentValue += pieceOfTheInterval;
    }
}

int main() {
    float commencingValue;

    printf("the commencing value is ");
    std::cin >> commencingValue;
    printf("Function is sin(x) / x:\n\n");
    calcValues(commencingValue);

    return 0;
}
