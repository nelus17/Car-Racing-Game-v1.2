#ifndef MAP_H
#define MAP_H

#include "GlobalVariables.h"

class Map
{
public:
	Map();
	void createMap(char map[default_Map_Size][default_Map_Size]);
	void loadMap(char map[default_Map_Size][default_Map_Size]);
	void FlikerDisabler(); 

protected:
	int y, x, ncashcheck, ndistance, ncashpickedup;
	char map[25][25];
};

#endif