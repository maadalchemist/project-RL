#include <iostream>
#include "display.h"

using namespace std;

char display[20][20];

void clearDisplay() {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            display[i][j] = '.';
        }
    }
}

void draw() {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            cout << display[i][j];
        }
    }
}

void drawChar(int const& x, int const& y, char const& character) {
    display[x][y] = character;
}
