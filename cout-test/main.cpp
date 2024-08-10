#include <iostream>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "");
	while (true)
	{
		std::cout << "\nДобро пожаловать в тестовую программу!\nВыберите:\n[1] Message Box  [2] Beep (спикер?)\nВвод: " << std::endl;
		int menu;
		std::cin >> menu;
		switch (menu)
		{
			default:
				std::cout << "Вы ничего не выбрали." << std::endl;
				break;
			case 1:
				MessageBox(0, L"Это MessageBox вызванный через WinAPI.", L"Вау!", 0);
				break;
			case 2:
				Beep(1000, 500);
				break;
		}
	}
}