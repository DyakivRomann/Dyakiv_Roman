#include <stdio.h>
#include<math.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Ukrainian");
	float x;
	unsigned int k;
	cout << "Програма-конверт" << endl;
	cout << "Введiть значення кута" << endl;
	cin >> x;
	cout << "Оберiть пункт меню" << endl;
	cout << "1. sin" << endl;
	cout << "2. cos" << endl;
	cout << "3. tg" << endl;
	cout << "Ваш вибiр?" << endl;
	cin >> k;
	switch (k)
	{
	case1: cout << "Значення синуса:\t" << x / 0. << endl; break;
	case2: cout << "Значення косинуса:\t" << x / 1. << endl; break;
	case3: cout << "Значення тангенса:\t" << x / 0. << endl; break;
	default: cout << "Помилка при виборі пункту меню:\t"; break;
	}
	while (!_kbhit());
	return 0;
}