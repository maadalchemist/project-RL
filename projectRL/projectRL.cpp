#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <ctime>

#include "display.h"
#include "commonFunctions.h"
#include "Player.h"
#include "game_log.h"

using namespace std;

//define some global variables
string input;
bool game_loop, b;
bool debug = true;

Player player = Player(10, 10, 10);

void start() {
	srand(time(nullptr));

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
		if (input == "r" || input == "right" || input == "d") {
			player.move(1);
			append_log("Player moved right");
		}
		else if (input == "u" || input == "up" || input == "w") {
			player.move(2);
			append_log("Player moved up");
		}
		else if (input == "l" || input == "left" || input == "a") {
			player.move(3);
			append_log("Player moved left");
		}
		else if (input == "d" || input == "down" || input == "s") {
			player.move(4);
			append_log("Player moved down");
		}
		else if (input == "end" && debug) {
			game_loop = false;
		}
		clear_display();
		draw_ui();
		print_log();

		player.display();

		draw();
	}

	if (remove("log.txt") != 0) {
		perror("Error deleting file");
	}
	else {
		puts("\"log.txt\" successfully deleted");
	}
	return 0;
}