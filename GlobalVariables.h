#ifndef GLOBAL_VARIABLES_H
#define GLOBAL_VARIABLES_H

#define cash  '$'
#define car 'H'
#define default_Map_Size 25
#define getCall_Menu VK_ESCAPE

extern int	car_Coord_Y,
			car_Coord_X,
			scoreCoordY,
			scoreCoordX,
			obstacleCoordY,
			obstacleCoordX,
			cashcheck,
			distance,
			cashpickedup,
			defaultSpeed;

extern char	obs,
			map[25][25];

extern bool isStartup;

#endif