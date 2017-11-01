#include "stdafx.h"
#include "Car.h"
#include "GlobalVariables.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include <Windows.h>


Car::Car()
{
	y = car_Coord_Y; x = car_Coord_X; defaultSpeed;
}

void Car::createCar(char map[default_Map_Size][default_Map_Size])
{
	map[y][x] = 'H';
	map[y][x + 1] = '|';
	map[y][x - 1] = '|';
	map[y + 1][x - 1] = 'o';
	map[y + 1][x + 1] = 'o';
	map[y - 1][x - 1] = 'o';
	map[y - 1][x + 1] = 'o';
}

void Car::moveLeft(char map[default_Map_Size][default_Map_Size])
{
	if (map[y][x - 3] != '|') {
		map[y][x] = ' ';
		map[y][x + 1] = ' ';
		map[y][x - 1] = ' ';
		map[y + 1][x - 1] = ' ';
		map[y + 1][x + 1] = ' ';
		map[y - 1][x - 1] = ' ';
		map[y - 1][x + 1] = ' ';
		x -= 3;
		map[y][x] = 'H';
		map[y][x + 1] = '|';
		map[y][x - 1] = '|';
		map[y + 1][x - 1] = 'o';
		map[y + 1][x + 1] = 'o';
		map[y - 1][x - 1] = 'o';
		map[y - 1][x + 1] = 'o';
	}
}

void Car::moveRight(char map[default_Map_Size][default_Map_Size])
{
	if (map[y][x + 3] != '|') {
		map[y][x] = ' ';
		map[y][x + 1] = ' ';
		map[y][x - 1] = ' ';
		map[y + 1][x - 1] = ' ';
		map[y + 1][x + 1] = ' ';
		map[y - 1][x - 1] = ' ';
		map[y - 1][x + 1] = ' ';
		x += 3;
		map[y][x] = 'H';
		map[y][x + 1] = '|';
		map[y][x - 1] = '|';
		map[y + 1][x - 1] = 'o';
		map[y + 1][x + 1] = 'o';
		map[y - 1][x - 1] = 'o';
		map[y - 1][x + 1] = 'o';
	}
}