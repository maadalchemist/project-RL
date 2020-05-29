#include <iostream>
#include <string>

#include "display.h"
#include "commonFunctions.h"
#include "Player.h"

using namespace std;

//define some global variables
string input;
bool game_loop, b;
bool debug = true;

Player player = Player(10, 10, 10);

void start()
{
	cout << "  ____            _           _     ____  _     \n";
	cout << " |  _ \\ _ __ ___ (_) ___  ___| |_  |  _ \\| |    \n";
	cout << " | |_) | '__/ _ \\| |/ _ \\/ __| __| | |_) | |    \n";
	cout << " |  __/| | | (_) | |  __/ (__| |_  |  _ <| |___ \n";
	cout << " |_|   |_|  \\___// |\\___|\\___|\\__| |_| \\_\\_____|\n";
	cout << "               |__/                             \n";
	cout << "Welcome to Project RL! Please put the console window into fullscreen.\nIs the console in fullscreen? (y/n)";

	//Ask player to go into fullscreen
	b = false;
	while (b == false)
	{
		cin >> input;
		if (input == "y") {
			b = true;
		}
		else if (input == "n") {
			cout << "This game requires you to have your console window fullscreen! Please change that before proceeding\n";
		}
		else {
			cout << "Please respond with \"y\" or \"n\"\n";
		}
	}
}

int main() {
	if (debug == false) { start(); }

	clear_display();
	draw_ui();
	draw();

	game_loop = true;
	// Main gameplay loop
	while (game_loop) {
		cin >> input;
		if (input == "r" || input == "right" || input == "e" || input == "east" || input == "d") {
			player.move(1);
		}
		else if (input == "u" || input == "up" || input == "n" || input == "north" || input == "w") {
			player.move(2);
		}
		else if (input == "l" || input == "left" || input == "w" || input == "west" || input == "a") {
			player.move(3);
		}
		else if (input == "d" || input == "down" || input == "s" || input == "south" || input == "s") {
			player.move(4);
		}
		clear_display();
		draw_ui();

		player.display();

		draw();
	}
	return 0;
}