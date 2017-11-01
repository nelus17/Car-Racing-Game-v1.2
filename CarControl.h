#ifndef CARCONTROL_H
#define CARCONTROL_H

#include "Car.h"

class CarControl : public Car
{
public:
	CarControl();
	enum getKeyToMove {
		left = 1,
		right = 2,
		up = 3,
		down = 4
	};
	void movement();
};

#endif