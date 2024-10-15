#include <iostream>
#include "functions.h"

using namespace std;
using namespace ProgramFunctions;

int main() {
    
    int size = 0; // Size of the array
    int input; // User inputs data
    int* numbers = nullptr; // pointer for dynamic array
    
    // Loop for input until the user decides to stop (by entering 00)
    while (true) {
        cout << "Enter a number (type 00 to stop): ";
        cin >> input;

        // Breaks if the user enters 00
        if (input == 00) {
            break;
        }

        // Calls the function to add the new number to the dynamic array
        ProgramFunctions::addNumToArr(numbers, size, input);
    }

    // Calls the function to calculate the sum of the array
    int sum = ProgramFunctions::calcSumArr(numbers, size);

    cout << "\nThe sum of the numbers is: " << sum << endl;

    delete[] numbers;

    return 0;
}
