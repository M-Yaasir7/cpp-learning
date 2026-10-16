
// A simple login program

#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    string password;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if (username == "yasir" && password == "1234") {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid username or password." << endl;
    }

    return 0;
}
