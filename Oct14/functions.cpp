#include "functions.h"

namespace ProgramFunctions {

    // Function to dynamically add a number to the array
    void addNumber(int*& numbers, int& size, int input) {
        // Dynamically allocate a new array with increased size
        int* newNumbers = new int[size + 1];

        // Copy old array elements to the new array
        for (int i = 0; i < size; i++) {
            newNumbers[i] = numbers[i];
        }

        // Add the new input number to the new array
        newNumbers[size] = input;

        // Delete the old array and point to the new one
        delete[] numbers;
        numbers = newNumbers;

        // Increase the size of the array
        size++;
    }

    // Function to calculate the sum of the array
    int calculateSum(int* numbers, int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += numbers[i];
        }
        return sum;
    }
}
