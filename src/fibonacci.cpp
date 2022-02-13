#include <iostream>
#include <stdio.h>

void sumOfFibonacciNumbers(int maxValue) {
    int currentSum = 1;
    int theFirstNumber = 0;
    int theSecondNumber = 1;
    int nextNumber;

    do {
        nextNumber = theFirstNumber + theSecondNumber;
        theFirstNumber = theSecondNumber;
        theSecondNumber = nextNumber;
        
        currentSum += nextNumber;
    } 
    while (currentSum <= maxValue);

    std::cout << "\tthe sum is " << currentSum << '\n';
}
