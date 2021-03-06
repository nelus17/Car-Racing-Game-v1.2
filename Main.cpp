#include "stdafx.h"
#include "Car.h"
#include "Map.h"
#include "Obstacles.h"
#include "Menu.h"
#include "GameControl.h"
#include "GlobalVariables.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>


int main()
{
	Map Road;
	Car Player_Car;
	Car *ptr = &Player_Car;
	Obstacles EnemyCar;
	Obstacles Scores(0);
	GameControl Player;
	Menu menu;
	srand(time(0));
	Road.createMap(map);
	ptr->createCar(map);
	map[car_Coord_Y][car_Coord_X] = car;
	while (_kbhit() != 'q') {
		Road.FlikerDisabler();
		EnemyCar.createObstacles(map);
		Scores.createScores(map);
		Road.loadMap(map);
		Player.movement(ptr);
		Player.isCrashed(ptr);
		//Player.isTookCash(ptr);
		std::cout << " \n    Speed: " << defaultSpeed << std::endl;
		std::cout << " \n    Points: " << (cashpickedup * 30) << std::endl;
		if (isStartup) {    
			_getch();
			isStartup = false;
		}
		if (_kbhit()) {
			if (GetAsyncKeyState(getCall_Menu)) {
				menu.Call_the_menu(GetAsyncKeyState(getCall_Menu));
			}
		}
		if (map[ptr->y - 2][ptr->x] == cash || map[ptr->y - 2][ptr->x - 1] == cash || map[ptr->y - 2][ptr->x + 1] == cash) {
			map[ptr->y - 2][ptr->x] = ' ';
			map[ptr->y - 2][ptr->x - 1] = ' ';
			map[ptr->y - 2][ptr->x + 1] = ' ';
			++cashpickedup;
			scoreCoordY = 0;
			scoreCoordX = rand() % 15 + 2;
		}
		else if (scoreCoordY > 20) { //generates the cash
			scoreCoordY = 0;
			scoreCoordX = rand() % 15 + 2;
		}
		if (scoreCoordY > 8) { //does so the cash doesnt appear next to the obstacle
			++cashcheck;
		}
		Sleep(defaultSpeed);
	}
	std::cin.get();
	return 0;
}
