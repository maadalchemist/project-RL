#include <iostream>
#include <cmath>
#include "display.h"

using namespace std;

//global display variables
int const displayWidth = 236;
int const displayHeight = 62;
char display[displayWidth][displayHeight];

void clearDisplay() {
	for (int i = 0; i < displayWidth; i++) {
		for (int j = 0; j < displayHeight; j++) {
			display[i][j] = '.';
		}
	}
}

void draw() {
	for (int i = 0; i < displayHeight; i++) {
		for (int j = 0; j < displayWidth; j++) {
			cout << display[j][i];
		}
		cout << "\n";
	}
}

void drawChar(int const& x, int const& y, char const& character) {
	display[x][y] = character;
}

void drawRect(int const& x, int const& y, int const& w, int const& h, char const& character) {
	for (int i = 0; i < w; i++) {
		drawChar(x + i, y, character);
	}
	for (int i = 0; i < h; i++) {
		drawChar(x + w, y + i, character);
	}
	for (int i = w; i > 0; i--) {
		drawChar(x + i, y + h, character);
	}
	for (int i = h; i > 0; i--) {
		drawChar(x, y + i, character);
	}
}

void drawCircle(int const& x, int const& y, int const& r, char const& character) {
	for (double i = 0; i < 6.3; i += .1) {
		drawChar(int(x + cos(r)), int(y + sin(r)), character);
	}
} //needs work, but likely wont use anyways so leaving as is for now