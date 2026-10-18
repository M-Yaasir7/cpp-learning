
// A simple mood message program

#include <iostream>
using namespace std;

int main() {
    int mood;

    cout << "How are you feeling today?" << endl;
    cout << "1. Happy" << endl;
    cout << "2. Sad" << endl;
    cout << "3. Tired" << endl;
    cout << "Choose (1-3): ";
    cin >> mood;

    // Display a message based on the choice
    if (mood == 1) {
        cout << "Keep smiling!" << endl;
    } else if (mood == 2) {
        cout << "Take it easy. Better days will come." << endl;
    } else if (mood == 3) {
        cout << "Rest well. You deserve a break." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
