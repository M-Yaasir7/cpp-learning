// Learning input and output in C++

#include <iostream>          // Includes the input/output library

using namespace std;         // Lets us use cin and cout without std::

int main() {                 // Program execution starts here

    int age;                 // Creates an integer variable named age

    cout << "Enter your age: ";  // Asks the user to enter their age

    cin >> age;              // Takes the user's input and stores it in age

    cout << "Your age is: " << age << endl;  // Displays the entered age

    return 0;                // Ends the program successfully
}