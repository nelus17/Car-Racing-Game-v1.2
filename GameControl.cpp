#include "stdafx.h"
#include "GameControl.h"
#include "Obstacles.h"
#include "Map.h"
#include "Car.h"
#include "GlobalVariables.h"
#include <Windows.h>
#include <iostream>
#include <conio.h>


GameControl::GameControl()
{
}


int GameControl::movement(Car *Player_Car) {
	if (_kbhit()) {
		if (_getch() && GetAsyncKeyState(VK_LEFT)) {
			if (map[Player_Car->y][Player_Car->x - 3] == obs) {
				std::cout << "\n\n Game Over!!!" << std::endl;
				std::cout << "Press ENTER for Quit" << std::endl;
				std::cin.get();
				return 0;
			}
			Player_Car->moveLeft(map);
		}
	}
	if (_kbhit()) {
		if (_getch() && GetAsyncKeyState(VK_RIGHT)) {
			if (map[Player_Car->y][Player_Car->x + 3] == obs) {
				std::cout << "\n\n Game Over!!!" << std::endl;
				std::cout << "Press ENTER for Quit" << std::endl;
				std::cin.get();
				return 0;
			}
			Player_Car->moveRight(map);
		}
	}
	if (_kbhit()) {
		if (_getch() && GetAsyncKeyState(VK_UP)) {
			defaultSpeed -= 25;
		}
		else if (_getch() && GetAsyncKeyState(VK_DOWN)) {
			defaultSpeed += 25;
			if (defaultSpeed <= 25) {
				defaultSpeed = 25;
			}
		}
	}
}

int GameControl::isCrashed(Car *ptr) {
	if (map[ptr->y - 2][ptr->x] == obs || map[ptr->y - 2][ptr->x - 1] == obs || map[ptr->y - 2][ptr->x + 1] == obs) {
		std::cout << "\n\n Game Over!!!" << std::endl;
		std::cout << "Press ENTER for Quit" << std::endl;
		std::cin.get();
		return 0;
	}
}

/*bool GameControl::isTookCash(Car *ptr) {
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
}*/

