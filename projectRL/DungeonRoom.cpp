#include "DungeonRoom.h"

//this is intended to store relevant room data to be used during generation of dungeon

DungeonRoom::DungeonRoom(const int x, const int y, const int w, const int h) {
	this->x_ = x;
	this->y_ = y;
	this->w_ = w;
	this->h_ = h;
}

int DungeonRoom::get_x() const {
	return x_;
}

int DungeonRoom::get_y() const {
	return y_;
}

int DungeonRoom::get_w() const {
	return w_;
}

int DungeonRoom::get_h() const {
	return h_;
}

void DungeonRoom::reconstruct_dungeon_room(const int x, const int y, const int w, const int h) {
	x_ = x;
	y_ = y;
	w_ = w;
	h_ = h;
}