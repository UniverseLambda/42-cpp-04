#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal(): mType("THE ORIGINAL MIGHTY MORPHIN' DINO MEGAZORG") {
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {
	mType = cpy.mType;
}

WrongAnimal::~WrongAnimal() {
}


WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	mType = rhs.mType;
	return *this;
}

const std::string &WrongAnimal::getType() const {
	return mType;
}

void WrongAnimal::makeSound() const {
	std::cout << "You overstepped your boundaries. You don't know who I am you useless low-level MocDanold worker! I want to speak to your manager! NOW!" << std::endl;
}
