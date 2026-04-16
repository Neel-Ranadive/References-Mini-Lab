#include <iostream>
using namespace std;

void doubleValue(int& num) {
    num *= 2;
}

int main() {
    int value;
    cout << "Enter an integer: ";
    cin >> value;

    doubleValue(value);

    cout << "Doubled value: " << value << endl;
    return 0;
}
