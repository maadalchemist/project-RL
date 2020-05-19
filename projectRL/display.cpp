#include <iostream>
#include "display.h"

using namespace std;

int const displayWidth = 236;
int const displayHeight = 62;
char display[displayWidth][displayHeight];

void clearDisplay() {
    for (int i = 0; i < displayHeight; i++) {
        for (int j = 0; j < displayWidth; j++) {
            display[i][j] = '.';
        }
    }
}

void draw() {
    for (int i = 0; i < displayHeight; i++) {
        for (int j = 0; j < displayWidth; j++) {
            cout << display[i][j];
        }
        cout << "\n";
    }
}

void drawChar(int const& x, int const& y, char const& character) {
    display[x][y] = character;
}
