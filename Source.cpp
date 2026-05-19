#include <iostream>
#define SIZE 10
using namespace std;
void main() {
	int m1[SIZE];
	cout << "Enter 10 integers:" << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> m1[i];
	}
	cout << "Array before swapping values:" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << m1[i] << " ";
	}
	cout << endl;
	int temp = m1[9];
	for (int i = 9; i >= 0; i -= 1) {
		i != 0 ? m1[i] = m1[i - 1] : m1[i] = temp;
	}
	cout << "Array after swapping values:" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << m1[i] << " ";
	}
	cout << endl;
}