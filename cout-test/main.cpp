#include <iostream>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "");
	while (true)
	{
		std::cout << "\n����� ���������� � �������� ���������!\n��������:\n[1] Message Box  [2] Beep (������?)\n����: " << std::endl;
		int menu;
		std::cin >> menu;
		switch (menu)
		{
			default:
				std::cout << "�� ������ �� �������." << std::endl;
				break;
			case 1:
				MessageBox(0, L"��� MessageBox ��������� ����� WinAPI.", L"���!", 0);
				break;
			case 2:
				Beep(1000, 500);
				break;
		}
	}
}