#include "stdafx.h"
#include "GlobalVariables.h"
#define cash '$'
#define car 'H'
#define default_Map_Size 25
#define getCall_Menu VK_ESCAPE

int car_Coord_Y = 17,
	car_Coord_X = 9,
	scoreCoordY,
	scoreCoordX,
	obstacleCoordY,
	obstacleCoordX,
	cashcheck = 0,
	distance = 0,
	cashpickedup = 0,
	defaultSpeed = 100;

char	obs = 219,
		map[default_Map_Size][default_Map_Size];

bool isStartup = true;