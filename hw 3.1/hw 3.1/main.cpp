#include <iostream>


class Calculator {
private:
	double num1;
	double num2;
public:
	double add() {
		return num1 + num2;
	}
	double multiply() {
		return num1 * num2;
	}
	double subtract_1_2() {
		return num2 - num1;
	}
	double subtract_2_1() {
		return num1 - num2;
	}
	double divide_1_2() {
		return num1 / num2;
	}
	double divide_2_1() {
		return num2 / num1;
	}
	bool set_num1(double num1) {
		if (num1 == 0) {
			return false;
		}
		this->num1 = num1;
		return true;
		
	}
	bool set_num2(double num2) {
		if (num2 == 0) {
			return false;
		}
		this->num2 = num2;
		return true;
	}
};

int main() {
	setlocale(LC_ALL, "RUS");
	Calculator math;
	while (true) {
	double num1;
	double num2;
	std::cout << "Введите num1: ";
	std::cin >> num1;
	math.set_num1(num1);
	std::cout << "Введите num2: ";
	std::cin >> num2;
	math.set_num2(num2);
	while (!math.set_num1(num1) ) {
		std::cout << "Неверный ввод" << std::endl << "Введите num1:";
		std::cin >> num1;
		math.set_num1(num1);
	}
	while (!math.set_num2(num2)) {
		std::cout << "Неверный ввод" << std::endl << "Введите num2:";
		std::cin >> num2;
		math.set_num2(num2);
	}
	
		std::cout << "num1 + num2 = " << math.add() << std::endl;
		std::cout << "num1 * num2 = " << math.multiply() << std::endl;
		std::cout << "num2 - num1 = " << math.subtract_1_2() << std::endl;
		std::cout << "num1 - num2 = " << math.subtract_2_1() << std::endl;
		std::cout << "num1 / num2 = " << math.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << math.divide_2_1() << std::endl;
	
}
}