#include <iostream>
#include <string>

#include "display.h"
#include "commonFunctions.h"

using namespace std;

//define some global variables
string input;
bool game_loop;

void start()
{
	cout << "Welcome to Project RL! Please put the console window into fullscreen.\nIs the console in fullscreen? (y/n)";
	cin >> input;
}

int main() {
	start();

	clear_display();
	draw();

	game_loop = true;
	// Main gameplay loop
	while (game_loop) {
		cin >> input;
		clear_display();

		draw();
	}
	return 0;
}