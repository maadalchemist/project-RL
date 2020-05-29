#include "dungeonGeneration.h"

#include <algorithm>

#include "commonFunctions.h"
#include "DungeonRoom.h"

#include <vector>

#include "display.h"

using namespace std;

vector<DungeonRoom> dungeon_rooms;

void room_collision_prevention(vector<DungeonRoom> rooms) {
	auto room = rooms.at(rooms.size());
	const int k = rooms.size() - 1;
	const auto l = max(k, 0);
	for (auto j = 0; j < l; j++) {} // check for collisions
}

//generate rooms into a file
void generate_dungeon() {
	const auto room_number = rand_int(5, 10); // amount of rooms
	dungeon_rooms.clear();
	for (auto i = 0; i < room_number; i++) {
		auto x = rand_int(3, 166);
		auto y = rand_int(3, 24);
		auto w = rand_int(15, 30);
		auto h = rand_int(10, 20);
		dungeon_rooms.emplace_back(x, y, w, h);
	}
}

// print dungeon
void display_dungeon() {
	for (auto& dungeon_room : dungeon_rooms)
	{
		draw_rect(dungeon_room.get_x(), dungeon_room.get_y(), dungeon_room.get_w(), dungeon_room.get_h(), '#');
	}
}