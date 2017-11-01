#include "stdafx.h"
#include "Obstacles.h"
#include "GlobalVariables.h"
#include <iostream>


Obstacles::Obstacles()
{
	obstacleCoordY = 0;  obstacleCoordX = rand() % 15 + 2; 
}

Obstacles::Obstacles(int scoreCoordY)
{
	scoreCoordX = rand() % 15 + 2;
}

void Obstacles::createObstacles(char map[default_Map_Size][default_Map_Size])
{
	obs = 219;
	map[obstacleCoordY][obstacleCoordX] = ' ';
	map[obstacleCoordY][obstacleCoordX] = ' ';
	map[obstacleCoordY][obstacleCoordX + 1] = ' ';
	map[obstacleCoordY][obstacleCoordX - 1] = ' ';
	map[obstacleCoordY + 1][obstacleCoordX - 1] = ' ';
	map[obstacleCoordY + 1][obstacleCoordX + 1] = ' ';
	map[obstacleCoordY - 1][obstacleCoordX - 1] = ' ';
	map[obstacleCoordY - 1][obstacleCoordX + 1] = ' ';
	++obstacleCoordY;
	map[obstacleCoordY][obstacleCoordX] = obs;
	map[obstacleCoordY][obstacleCoordX + 1] = obs;
	map[obstacleCoordY][obstacleCoordX - 1] = obs;
	map[obstacleCoordY + 1][obstacleCoordX - 1] = obs;
	map[obstacleCoordY + 1][obstacleCoordX + 1] = obs;
	map[obstacleCoordY - 1][obstacleCoordX - 1] = obs;
	map[obstacleCoordY - 1][obstacleCoordX + 1] = obs;
	if (obstacleCoordY > 20) {
		obstacleCoordY = 0;  obstacleCoordX = rand() % 15 + 2;
	}
}

void Obstacles::createScores(char map[default_Map_Size][default_Map_Size])
{
	if (ncashcheck) {
		map[scoreCoordY][scoreCoordX] = ' ';
		++scoreCoordY;
		map[scoreCoordY][scoreCoordX] = cash;
	}
}
