// Learning variables and data types in C++
// A variable is a named place used to store a value

#include <iostream>          // Includes the input/output library

using namespace std;         // Lets us use cout without writing std::cout

int main() {                 // Program execution starts here

    int age = 20;            // int stores whole numbers
    double height = 5.8;     // double stores decimal numbers
    char grade = 'A';        // char stores a single character
    bool student = true;     // bool stores true or false

    cout << age << endl;     // Prints the value of age
    cout << height << endl;  // Prints the value of height
    cout << grade << endl;   // Prints the value of grade
    cout << student << endl; // Prints the value of student

    return 0;                // Ends the program successfully
}