#include <iostream>
#include <stdio.h>
#include "calcValues.h"
#include "fibonacci.h"

using std::cin;

int main() {
    float commencingValue;

    printf("the commencing value is ");
    cin >> commencingValue;
    printf("Function is sin(x) / x:\n\n");
    calcValues(commencingValue);


    int maxValue;

    printf("\nSum of fibonacci numbers:\n");
    printf("\n\tthe max value is ");
    cin >> maxValue;
    sumOfFibonacciNumbers(maxValue);

    return 0;
}
