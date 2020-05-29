#pragma once
class DungeonRoom {
private:
	int x_, y_, w_, h_;
public:
	DungeonRoom(int x, int y, int w, int h);
	int get_x() const;
	int get_y() const;
	int get_w() const;
	int get_h() const;
	void reconstruct_dungeon_room(const int x, const int y, const int w, const int h);
};
