#include <iostream>
#include <string>

int main(int args, char** argv)
{
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Hello, " << name << std::endl;
	
}