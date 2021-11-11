#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal(): mType("THE ORIGINAL MIGHTY MORPHIN' DINO MEGAZORG") {
	std::cout << "What the hell have I created?" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {
	std::cout << "What the hell have I copied?" << std::endl;
	mType = cpy.mType;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "What the hell have I destructed?" << std::endl;
}


WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	std::cout << "What the hell have I copied by operator?" << std::endl;
	mType = rhs.mType;
	return *this;
}

const std::string &WrongAnimal::getType() const {
	return mType;
}

void WrongAnimal::makeSound() const {
	std::cout << "You overstepped your boundaries. You don't know who I am you useless low-level MocDanold worker! I want to speak to your manager! NOW!" << std::endl;
}
