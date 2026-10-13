
// Swap the values of two variables

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int temp;

    // Store a's value temporarily
    temp = a;

    // Copy b's value into a
    a = b;

    // Put the original a value into b
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
