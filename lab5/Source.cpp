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
	cout << "��������-������� !" << endl;
	cout << "����i�� �������� ����" << endl;
	cin >> x;
	cout << "����i�� ����� ����" << endl;
	cout << "1. sin" << endl;
	cout << "2. cos" << endl;
	cout << "3. tg" << endl;
	cout << "��� ���i�?" << endl;
	cin >> k;
	switch (k)
	{
	case1: cout << "�������� ������:\t" << x / 0. << endl; break;
	case2: cout << "�������� ��������:\t" << x / 1. << endl; break;
	case3: cout << "�������� ��������:\t" << x / 0. << endl; break;
	default: cout << "������� ��� ����� ������ ����:\t"; break;
	}
	while (!_kbhit());
	return 0;
}