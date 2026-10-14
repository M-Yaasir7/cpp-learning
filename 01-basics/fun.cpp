
// A little Spider-Man themed program

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name, hero: ";
    getline(cin, name);

    cout << "\nWelcome, " << name << "!" << endl;
    cout << "Your friendly neighborhood Spider-Man is watching." << endl;
    cout << "With great power comes great responsibility." << endl;

    return 0;
}



// Example Output--- 

// Enter your name, hero: Yasir

// Welcome, Yasir!
// Your friendly neighborhood Spider-Man is watching.
// With great power comes great responsibility.
