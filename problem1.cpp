#include <iostream>
#include <string>
using namespace std;

void makeLowercase(string& text) {
    for (char& c : text) {
        c = tolower(c);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    makeLowercase(input);

    cout << "Lowercase version: " << input << endl;
    return 0;
}