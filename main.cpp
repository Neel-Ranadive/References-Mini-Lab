#include <iostream>
#include <cctype>
using namespace std;

void addStuff(int& y){
    y += 3;
}

int main(){
    int x = 5;
    addStuff(x);
    cout << "x = " << x << endl;
}

int addThings(int a){
    a += 3;
    return a;
}

int secondmain(){
    int b = 5;
    int c = addThings(b);
    cout << b << endl;
    cout << c << endl;
}