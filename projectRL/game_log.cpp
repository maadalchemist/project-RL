#include "game_log.h"
#include "display.h"

#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

ofstream olog;
ifstream ilog;
string line;

//add information to the log
void append_log(string const& txt) {
	olog.open("log.txt", ios::app);
	olog << txt + "\n";
	olog.close();
}

// display the last 10 log entries to the relevant screenspace
void print_log() {
	ilog.open("log.txt");
	vector<string> log_output;
	while (getline(ilog, line)) {
		log_output.push_back(line);
	}
	ilog.close();
	int j = log_output.size() - 10;
	for (auto i = max(j, 0); i < log_output.size(); i++) {
		draw_text(2, i + 60 - log_output.size(), log_output.at(i));
	}
}