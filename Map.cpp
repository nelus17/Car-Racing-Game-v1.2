#include "stdafx.h"
#include "Map.h"
#include "GlobalVariables.h"
#include <iostream>
#include <Windows.h>


Map::Map()
{
	ncashcheck = 0; ndistance = 0; ncashpickedup = 0;
}

void Map::createMap(char map[default_Map_Size][default_Map_Size])
{
	for (int i = 0; i < 20; ++i) {
		for (int j = 0; j < 20; ++j) {
			map[i][0] = '|';
			map[i][18] = '|';
			map[i][j] = ' ';
		}
	}
}

void Map::loadMap(char map[default_Map_Size][default_Map_Size])
{
	for (int i = 0; i < 20; ++i) {
		for (int j = 0; j < 20; ++j) {
			std::cout << map[i][j];
			if (j >= 19) {
				std::cout << std::endl;
			}
		}
	}
	std::cout << "    Distance:" << ndistance;
	ndistance++;
}

void Map::FlikerDisabler() 
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}