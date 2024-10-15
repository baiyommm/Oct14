#include "functions.h"

namespace ProgramFunctions {

    // Function to dynamically add a number to the array
    void addNumToArr(int*& numbers, int& size, int input) {
        // code to dynamically allocate (new array with increased size by +1)
        int* newNumbers = new int[size + 1];

        // Copy old array to the new array
        for (int i = 0; i < size; i++) {
            newNumbers[i] = numbers[i];
        }

        // Add the new input to the new array
        newNumbers[size] = input;

        // Delete the old array and point to the new array
        delete[] numbers;
        numbers = newNumbers;

        // Increase the size of the array
        size++;
    }

    // Function to calculate the sum of the array
    int calcSumArr(int* numbers, int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += numbers[i];
        }
        return sum;
    }
}
