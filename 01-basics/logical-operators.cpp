// Learning logical operators in C++

#include <iostream>          // Provides input and output tools

using namespace std;         // Lets us use cout without std::

int main() {                 // Program execution starts here

    int age = 20;            // Stores a person's age
    bool hasID = true;       // Stores whether the person has an ID

    cout << (age >= 18 && hasID) << endl;  // True if both conditions are true
    cout << (age < 18 || hasID) << endl;   // True if at least one condition is true
    cout << !(age >= 18) << endl;          // Reverses the condition's result

    return 0;                // Ends the program successfully
}