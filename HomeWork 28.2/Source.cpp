#include "Taks2.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");

	cout << "������ 2.\n������� ����� �������:";
	int len;
	cin >> len;
	int* a = new int[len];
	fillArr(a, len, 0, 50);
	cout << "������ � ����������� ������:\n\n";
	showArr(a, len);
	cout << "\n������� ����� ����� �������: ";
	int newLen;
	cin >> newLen;
	a = resizeArr(a, len, newLen);
	cout << "������ � ����� ������:\n\n";
	showArr(a, newLen);

	return 0;
}