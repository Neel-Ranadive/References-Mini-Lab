#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int addRandom(int num) {
    int r = rand() % 100;
    return num + r;
}

int main() {
    srand(time(0));

    int original;
    cout << "Enter an integer: ";
    cin >> original;

    int randomized = addRandom(original);

    cout << "Original number: " << original << endl;
    cout << "Randomized number: " << randomized << endl;

    return 0;
}