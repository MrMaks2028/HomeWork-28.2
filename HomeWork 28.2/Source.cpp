#include "Taks2.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");

	cout << "Задача 2.\nВведите длину массива:";
	int len;
	cin >> len;
	int* a = new int[len];
	fillArr(a, len, 0, 50);
	cout << "Массив с изначальной длиной:\n\n";
	showArr(a, len);
	cout << "\nВведите новую длину массива: ";
	int newLen;
	cin >> newLen;
	a = resizeArr(a, len, newLen);
	cout << "Массив с новой длиной:\n\n";
	showArr(a, newLen);

	return 0;
}