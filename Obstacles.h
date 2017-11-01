#ifndef OBSTACLES_H
#define OBSTACLES_H

#include "GlobalVariables.h"

class Obstacles
{
public:
	Obstacles();
	Obstacles(int scoreCoordY);
	void createObstacles(char map[default_Map_Size][default_Map_Size]);
	void createScores(char map[default_Map_Size][default_Map_Size]);

protected:
	int y, x, ncashcheck, obstacleCoordX, obstacleCoordY;
	char obs;
};

#endif