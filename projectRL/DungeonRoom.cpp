#include "DungeonRoom.h"

//this is intended to store relevant room data to be used during generation of dungeon

DungeonRoom::DungeonRoom(int x, int y, int w, int h) {
	this->x_ = x;
	this->y_ = y;
	this->w_ = w;
	this->h_ = h;
}