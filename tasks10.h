#pragma once

#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>
#include <Windows.h>

void task1();
void task2();
void task3();
void task4();
void task5();

inline void menu() {
	while (true) {
		std::cout << "1. Task 1" << std::endl;
		std::cout << "2. Task 2" << std::endl;
		std::cout << "3. Task 3" << std::endl;
		std::cout << "4. Task 4" << std::endl;
		std::cout << "5. Task 5" << std::endl;
		std::cout << "0. Exit" << std::endl;
		int choice;
		std::cout << "Enter your choice: ";
		std::cin >> choice;
		switch (choice) {
			case 1:
				task1();
				break;
			case 2:
				task2();
				break;
			case 3:
				task3();
				break;
			case 4:
				task4();
				break;
			case 5:
				task5();
				break;
			case 0:
				return;
			default:
				std::cout << "Invalid choice. Please try again." << std::endl;
		}
	}
}