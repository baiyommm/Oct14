#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace ProgramFunctions {
    // Function to dynamically add a number to the array
    void addNumToArr(int*& numbers, int& size, int input);

    // Calculate the sum of array
    int calcSumArr(int* numbers, int size);
}

#endif
