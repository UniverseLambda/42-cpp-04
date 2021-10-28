#include "Animal.hpp"

#include <iostream>

Animal::Animal(): mType("THE ORIGINAL MIGHTY MORPHIN' DINO MEGAZORG") {
}
Animal::Animal(const Animal &cpy) {
	mType = cpy.mType;
}

Animal::~Animal() {
}


Animal &Animal::operator=(const Animal &rhs) {
	mType = rhs.mType;
	return *this;
}

const std::string &Animal::getType() const {
	return mType;
}

void Animal::makeSound() const {
	std::cout << "* Big metallic dino noises *" << std::endl;
}
