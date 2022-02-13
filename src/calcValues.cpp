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
