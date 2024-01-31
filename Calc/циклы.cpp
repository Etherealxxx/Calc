
#include <iostream>
#include <Windows.h>
#include<cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	setlocale(0, "Russian");
	int choice;
	double result;
	double per1, per2;
	cout << "Выбор операции:\n";
	cout << "1.Сложение\n";
	cout << "2.Вычитание\n";
	cout << "3.Умножение\n";
	cout << "4.Деление\n";
	cout << "5.Возведение в степень\n";
	cout << "6.Нахождения квадратного корня \n";
	cout << "7.Нахождение 1 процента от числа\n ";
	cout << "8.Найти факториал числа\n";
	cout << "9.Выйти из программы\n";
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "Введите два числа:\n";
		cin >> per1 >> per2;
		result = per1 + per2;
		cout << "Результат сложения ---->" << result;
		break;

	case 2:
		cout << "Введите два числа:\n";
		cin >> per1 >> per2;
		result = per1 - per2;
		cout << "Результат вычитания ---->" << result;
		break;
	case 3:
		cout << "Введите два числа:\n";
		cin >> per1 >> per2;
		result = per1 * per2;
		cout << "Результат умножения ---->" << result;
		break;
	case 4:
		cout << "Введите два числа:\n";
		cin >> per1 >> per2;
		result = per1 / per2;
		cout << "Результат деления ---->" << result;
		break;
	case 5:
		cout << "Введите два числа:\n";
		cin >> per1 >> per2;
		result = per1 * per2;
		cout << "Результат возведения в степень ---->" << pow(per1, per2);
		break;
	case 6:
		cout << "Введите число:\n";
		cin >> per1;
		cout << "Результат извлечения в квадратного корня ---->" << sqrt(per1);
		break;
	case 7:
		cout << "Введите число:\n";
		cin >> per1;
		cout << "Результат нахождения 1% ---->" << (per1 / 100) * 1;
		break;
	case 8:
		cout << "Введите число: ";
		cin >> per1;

		result = 1.0;  
		for (per2 = 1; per2 <= per1; per2++) {
			result = result * per2;
		}
		cout << "Факториал ---->" << result << "\n";
		break;
	case 9:
		cout << "Программа закрыта";
		return 0;
	default:
		cout << "Введен неверный символ";
		break;
	}

	return 0;
}







