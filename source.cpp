#include <iostream>
#include <Windows.h>
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string name = "�����";
	std::cout << "������� ���: ";
	std::cin >> name;
	std::cout << "������������, " << name << "!" << std::endl;
	std::cout << "�������?";
	std::cin >> name;
}