#include "tasks10.h"
#define SIZE 10
using namespace std;
void task1() {
	int m1[SIZE];
	int* maxvalue = nullptr, *minvalue = nullptr;
	cout << "Enter 10 integers:" << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> m1[i];
	}
	for (int i = 0; i < SIZE; i++) {
		if (maxvalue == nullptr || m1[i] > *maxvalue) {
			maxvalue = &m1[i];
		}
		if (minvalue == nullptr || m1[i] < *minvalue) {
			minvalue = &m1[i];
		}
	}
	cout << "Array before swapping max and min values:" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << m1[i] << " ";
	}
	cout << endl;
	int templea = *maxvalue;
	int tempelb = *minvalue;
	*maxvalue = tempelb;
	*minvalue = templea;
	cout << "Array after swapping max and min values:" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << m1[i] << " ";
	}
	cout << endl;
}