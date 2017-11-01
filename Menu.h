#ifndef MENU_H
#define MENU_H

class Menu
{
public:
	Menu();
	void Call_the_menu(char keyp);

protected:
	enum getLevel {
		Hard = '3',
		Medium = '2',
		Easy = '1'
	};
	char keyp;
};


#endif // !MENU_H



