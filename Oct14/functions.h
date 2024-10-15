#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace ProgramFunctions {
    // Function to dynamically add a number to the array
    void addNumber(int*& numbers, int& size, int input);

    // Function to calculate the sum of the array
    int calculateSum(int* numbers, int size);
}

#endif
