#include "dungeonGeneration.h"

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

#include "commonFunctions.h"
#include "DungeonRoom.h"

using namespace std;

void generate_dungeon() {
	auto room_number = rand_int(3, 10);
	vector<DungeonRoom> dungeon_rooms;
	for (int i = 0, i < room_number; i++) {
	}
}

void display_dungeon() {
}