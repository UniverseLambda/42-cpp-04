#include "Animal.hpp"

#include <iostream>

Animal::Animal(): mType("THE ORIGINAL MIGHTY MORPHIN' DINO MEGAZORG") {
	std::cout << "Animal constructed" << std::endl;
}
Animal::Animal(const Animal &cpy) {
	std::cout << "Animal copied" << std::endl;

	mType = cpy.mType;
}

Animal::~Animal() {
	std::cout << "Animal destructed" << std::endl;
}


Animal &Animal::operator=(const Animal &rhs) {
	std::cout << "Animal copied with operator" << std::endl;

	mType = rhs.mType;
	return *this;
}

const std::string &Animal::getType() const {
	return mType;
}
