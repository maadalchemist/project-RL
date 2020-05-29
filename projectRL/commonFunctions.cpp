#include <ctime>
#include <iostream>
#include <cstdlib>

#include "commonFunctions.h"

using namespace std;

void wait(const int wait_time) {
	const auto start = clock();
	while (clock() != start + wait_time) {}
}

int rand_int(const int min, const int max) {
	const auto range = max - min;
	const auto rand_int = min + rand() % range;
	return rand_int;
}