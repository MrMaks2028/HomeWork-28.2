#include "Taks2.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void fillArr(int a[], int len, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < len; i++)
		a[i] = rand() % (max - min) + min;
}

void showArr(int a[], int len) {
	std::cout << "[";
	for (int i = 0; i < len; i++)
		std::cout << a[i] << ", ";
	std::cout << "\b\b]\n";
}

int* resizeArr(int a[], int len, int newLen) {
	int* a2 = new int[newLen];
	for (int i = 0; i < len; i++)
		a2[i] = a[i];
	for (int i = len; i < newLen; i++)
		a2[i] = 0;
	return  a2;
}