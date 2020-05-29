#include "dungeonGeneration.h"

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

#include "commonFunctions.h"
#include "DungeonRoom.h"

using namespace std;

//generate rooms into a file
void generate_dungeon() {
	const auto room_number = rand_int(3, 10); // amount of rooms
	vector<DungeonRoom> dungeon_rooms; // store dungeon room information
	for (auto i = 0; i < room_number; i++) {
	}
}

// print dungeon
void display_dungeon() {
}