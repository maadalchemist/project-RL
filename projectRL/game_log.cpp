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
	while (getline(ilog, line)) {
		log_output.push_back(line);
	}
	ilog.close();
	for (int i = log_output.size() - 10; i < log_output.size(); i++) {
		draw_text(2, i + 60 - log_output.size(), log_output.at(i));
	}
}