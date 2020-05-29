#pragma once
#include <string>

using namespace std;

void clear_display(); // repopulate display array with periods
void draw(); // print display

//different ways to alter display array
void draw_char(int const& x, int const& y, char const& character);
void draw_rect(int const& x, int const& y, int const& w, int const& h, char const& character);
void draw_circle(int const& x, int const& y, int const& r, char const& character);
void draw_text(int const& x, int const& y, string const& txt);
void draw_ui();