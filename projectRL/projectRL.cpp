#include <iostream>
#include <string>

#include "display.h"

using namespace std;

//defining some global variables
string test;

int main() {

    clearDisplay();
    draw();

    while (0==0) {
        draw();
        cin >> test;
    }
}