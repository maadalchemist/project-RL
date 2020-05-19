#include <iostream>

#include "display.h"
#include "commonFunctions.h"

using namespace std;

int main() {
	clearDisplay();
	drawChar(0, 0, '1');
	drawRect(5, 5, 5, 5, 'O');
	drawCircle(20, 20, 10, 'X');
	draw();
}