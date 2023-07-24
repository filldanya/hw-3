#include <iostream>
#include <cstring>
#include "windows.h"

class Counter {
private:
	int num = 1;
public:
	void inc() {
		num++;
	}
	void dec() {
		num--;
	}
	void out() {
		std::cout <<num<< std::endl;
	}
	void set_num(int num) {
		this->num = num;
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");
	Counter value;
	int num;
	std::string answer;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> answer;
	if (answer == "да") {
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> num;
		value.set_num(num);
	}
	char command;
	int a = 1;
	while (a) {
	
	std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
	std::cin >> command;
	if (command == '+') {
		value.inc();
	}
	else if (command == '-') {
		value.dec();
	}
	else if (command == '=') {
		value.out();
	}
	else if (command == 'x') {
		a = 0;
	}
}
}