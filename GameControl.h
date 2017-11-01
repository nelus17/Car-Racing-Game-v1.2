#ifndef GAMECONTROL_H
#define GAMECONTROL_H

#include "Car.h"

class GameControl : public Car
{
public:
	GameControl();
	int movement(Car *ptr);
	int isCrashed(Car *ptr);
	//bool isTookCash(Car *ptr);
};

#endif