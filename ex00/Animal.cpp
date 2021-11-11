#include "Animal.hpp"

#include <iostream>

Animal::Animal(): mType("THE ORIGINAL MIGHTY MORPHIN' DINO MEGAZORG") {
	std::cout << "An animal has been created (does this makes me a God?)" << std::endl;
}
Animal::Animal(const Animal &cpy) {
	std::cout << "Animal duplication" << std::endl;
	mType = cpy.mType;
}

Animal::~Animal() {
	std::cout << "Animal destruction (*loud knock noise* FBI OPEN UP)" << std::endl;
}


Animal &Animal::operator=(const Animal &rhs) {
	std::cout << "Animal duplication by operator" << std::endl;
	mType = rhs.mType;
	return *this;
}

const std::string &Animal::getType() const {
	return mType;
}

void Animal::makeSound() const {
	std::cout << "* Big metallic dino noises *" << std::endl;
}
