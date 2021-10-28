#include "Cat.hpp"

#include <iostream>

Cat::Cat(): Animal() {
	mType = "Cat";
}

Cat::Cat(const Cat &cpy): Animal(cpy) {
}

Cat::~Cat() {
}

Cat &Cat::operator=(const Cat &rhs) {
	Animal::operator=(rhs);

	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
