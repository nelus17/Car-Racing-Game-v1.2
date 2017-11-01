#ifndef CAR_H
#define CAR_H

#include "GlobalVariables.h"

class Car
{
public:
	Car();
	int y,
		x;
	Car *ptr;
	void createCar(char map[default_Map_Size][default_Map_Size]);
	void moveLeft(char map[default_Map_Size][default_Map_Size]);
	void moveRight(char map[default_Map_Size][default_Map_Size]);

protected:
	int defaultSpeed;
	char map[default_Map_Size][default_Map_Size];

};

#endif