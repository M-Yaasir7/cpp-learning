// Learning arithmetic operators in C++

#include <iostream>              // Includes the input/output library

using namespace std;             // Lets us use cout without std::

int main() {                     // Program execution starts here

    int a = 10;                  // Stores the first whole number
    int b = 3;                   // Stores the second whole number

    cout << "Addition: " << a + b << endl;          // Adds a and b
    cout << "Subtraction: " << a - b << endl;       // Subtracts b from a
    cout << "Multiplication: " << a * b << endl;    // Multiplies a and b
    cout << "Division: " << a / b << endl;           // Divides a by b
    cout << "Remainder: " << a % b << endl;          // Gives the remainder

    return 0;                    // Ends the program successfully
}