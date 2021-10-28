#include "Dog.hpp"

#include <iostream>

Dog::Dog(): Animal() {
	mType = "Dog";
}

Dog::Dog(const Dog &cpy): Animal(cpy) {
}

Dog::~Dog() {
}

Dog &Dog::operator=(const Dog &rhs) {
	Animal::operator=(rhs);

	return *this;
}

void Dog::makeSound() const {
	std::cout << "Bark" << std::endl;
}

