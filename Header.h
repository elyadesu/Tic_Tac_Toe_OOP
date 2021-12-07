#pragma once
class playfield {
public:
	static char cells[3][3];
	void init_cells();
	void show_cells();
	bool check_win();
};
char playfield::cells[3][3];
class turns {
public:
	int side;
	bool pickside();
	bool computer();
	bool player();
};