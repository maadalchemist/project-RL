#include <ctime>
#include <iostream>

#include "commonFunctions.h"

using namespace std;

void wait(int waitTime) {
	clock_t start = clock();
	while (clock() != start + waitTime) {}
}