#include <iostream>
#include <string>




int main() {
	int num{};
	std::cout << "Write your number: ";
	std::cin >> num;
	std::cout << "Yor number -> " << num << std::endl << std::endl;

	std::cout << "Write your thoughts: ";
	std::string thoughts{};
	std::getline(std::cin >> std::ws, thoughts);
	std::cout << "Is it your thoghts?\n" << thoughts << std::endl;

	std::cout << "\n\n\n\n\n\n\n\n\nSrsly...\n\n";
	return 0;
}