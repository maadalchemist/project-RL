#pragma once
class Player {
private:
	int x_, y_, health_, max_health_;
public:
	Player(int x, int y, int max_health);
	void move(int const& direction); // moves player		0: Right, 1: Up, 2: Left, 3: Down			NOTE: currently unsafe; doesn't check environment to see if moveable
	void change_health(int const& difference);
	void attack(int const& damage); // filler for now, WIP
	void display();
};
