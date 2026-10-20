
// A simple password length checker

#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;

    cout << "Enter a password: ";
    cin >> password;

    // Check the number of characters
    if (password.length() >= 8) {
        cout << "Password length is acceptable!" << endl;
    } else {
        cout << "Password is too short!" << endl;
    }

    return 0;
}
