#include "game_log.h"
#include "display.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

ofstream olog;
ifstream ilog;
string line;

void append_log(string const& txt) {
	olog.open("log.txt", ios::app);
	olog << txt + "\n";
	olog.close();
}

void print_log() {
	ilog.open("log.txt");
	vector<string> log_output;
	//while (getline(ilog, line)) {}
	for (int i = 0; i < 10; i++) {
		if (getline(ilog, line)) {
			draw_text(2, 50 + i, line);
		}
	}
	ilog.close();
}