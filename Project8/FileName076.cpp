#include <iostream>
int main() {
	setlocale(LC_ALL, "RU");
	int a;
	std::cin >> a;
	if (a < 0) {
		std::cout << "����� �������������" << std::endl;
	}
	else if (a == 0 ) {
		std::cout << "����� ����� 0" << std::endl;
	}
	else if (a > 0) {
		std::cout << "����� �������������" << std::endl;
	}
}