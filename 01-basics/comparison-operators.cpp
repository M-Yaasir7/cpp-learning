// Learning comparison operators in C++

#include <iostream>              // Provides input and output tools

using namespace std;              // Lets us use cout without std::

int main() {                      // Program execution starts here

    int a = 10;                   // Stores the first number
    int b = 5;                    // Stores the second number

    cout << (a > b) << endl;      // Checks whether a is greater than b
    cout << (a < b) << endl;      // Checks whether a is less than b
    cout << (a == b) << endl;     // Checks whether a equals b
    cout << (a != b) << endl;     // Checks whether a is not equal to b
    cout << (a >= b) << endl;     // Checks whether a is greater than or equal to b
    cout << (a <= b) << endl;     // Checks whether a is less than or equal to b

    return 0;                     // Ends the program successfully
}