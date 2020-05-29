#include <iostream>
#include <cmath>
#include <string>
#include "display.h"

#include "game_log.h"

using namespace std;

//global display variables
int const display_width = 236;
int const display_height = 62;
char display[display_width][display_height];

// repopulate display array with periods
void clear_display() {
	for (int i = 0; i < display_width; i++) {
		for (int j = 0; j < display_height; j++) {
			display[i][j] = ' ';
		}
	}
}

// print display
void draw() {
	for (int i = 0; i < display_height; i++) {
		for (int j = 0; j < display_width; j++) {
			cout << display[j][i];
		}
		cout << "\n";
	}
} // print display

// different ways to alter display
void draw_char(int const& x, int const& y, char const& character) {
	display[x][y] = character;
}

void draw_rect(int const& x, int const& y, int const& w, int const& h, char const& character) {
	for (int i = 0; i < w; i++) {
		draw_char(x + i, y, character);
	}
	for (int i = 0; i < h; i++) {
		draw_char(x + w, y + i, character);
	}
	for (int i = w; i > 0; i--) {
		draw_char(x + i, y + h, character);
	}
	for (int i = h; i > 0; i--) {
		draw_char(x, y + i, character);
	}
}

void draw_circle(int const& x, int const& y, int const& r, char const& character) {
	for (double i = 0; i < 6.3; i += .1) {
		draw_char(int(x + cos(r)), static_cast<int>(y + sin(r)), character);
	}
} //doesn't work, but likely wont use anyways so leaving as is for now

void draw_text(int const& x, int const& y, string const& txt) {
	for (auto i = 0; i < txt.size(); i++)
	{
		draw_char(x + i, y, txt[i]);
	}
}

// draws ui and prints relevant information, including player stats and log
void draw_ui() {
	draw_rect(0, 0, 235, 61, '#');
	draw_rect(200, 0, 35, 61, '#');
	draw_rect(0, 48, 200, 13, '#');

	draw_text(209, 2, "Player Information");

	print_log();
}