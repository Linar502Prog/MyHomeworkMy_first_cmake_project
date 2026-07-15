#include<iostream>
int main() {
	setlocale(LC_ALL, "RUS");
	std::string name{};
	std::cout << "Введите имя : ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << std::endl;
	return EXIT_SUCCESS;
}
