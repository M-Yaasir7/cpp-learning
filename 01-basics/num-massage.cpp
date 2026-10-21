
// Program: Display a message based on the user's number

#include <iostream>  // Allows us to use cout and cin
using namespace std; // Lets us write cout instead of std::cout

int main() {
    // Create a variable to store the number entered by the user
    int number;

    // Ask the user to enter a number
    cout << "Enter a number from 1 to 10: ";

    // Read the number and store it in the variable
    cin >> number;

    // Check whether the number is between 1 and 3
    if (number >= 1 && number <= 3) {
        cout << "A fresh start!" << endl;

    // If the first condition is false, check whether it's between 4 and 7
    } else if (number >= 4 && number <= 7) {
        cout << "Keep the momentum going!" << endl;

    // If the number is between 8 and 10
    } else if (number >= 8 && number <= 10) {
        cout << "You're on fire!" << endl;

    // If none of the conditions match, the input is outside the range
    } else {
        cout << "Please enter a number from 1 to 10." << endl;
    }

    // End the program successfully
    return 0;
}
