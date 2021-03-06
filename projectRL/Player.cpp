#include "Player.h"
#include "display.h"

Player::Player(int x, int y, int max_health) {
	this->x_ = x;
	this->y_ = y;
	this->max_health_ = max_health;
	this->health_ = max_health_;
}

/*
 * 1 - right
 * 2 - up
 * 3 - left
 * 4 - down
 * done this way because I wanted to use a switch statement
 */
void Player::move(int const& direction) {
	switch (direction)
	{
	case 1:
		x_++;
		break;
	case 2:
		y_--;
		break;
	case 3:
		x_--;
		break;
	case 4:
		y_++;
		break;
	default:
		break;
	}
}

void Player::change_health(int const& difference) {
	health_ += difference;
}

void Player::attack(int const& damage) {
	//filler
}

void Player::display() const {
	draw_char(x_, y_, '@');
}