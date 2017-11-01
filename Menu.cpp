#include "stdafx.h"
#include "Menu.h"
#include "GlobalVariables.h"
#include <Windows.h>
#include <conio.h>
#include <iostream>


Menu::Menu()
{
	
}

void Menu::Call_the_menu(char keyp)
{
	isStartup = false;
	while (!_kbhit()) {
		keyp = _getch();
		isStartup = true;
		std::cout << "level of the game: \n";
		std::cout << "1 - Easy \n 2 - Medium \n 3 - Hard \n";
		std::cout << "Press Enter to continue";
		if (keyp == Easy) {
			defaultSpeed = 100;
		}
		else if (keyp == Medium) {
			defaultSpeed = 250;
		}
		else if (keyp == Hard) {
			defaultSpeed = 500;
		}
		isStartup = false;
	}
}