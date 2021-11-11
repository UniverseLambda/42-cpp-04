#include "Dog.hpp"

#include <iostream>

Dog::Dog(): Animal() {
	std::cout << "A godly good doggo has been created (THAT'S A GOOD BOY)" << std::endl;
	mType = "Dog";
}

Dog::Dog(const Dog &cpy): Animal(cpy) {
	std::cout << "A godly good doggo has been duplicated" << std::endl;
}

Dog::~Dog() {
	std::cout << "A godly good doggo destruction (saadness intensifies)" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	Animal::operator=(rhs);
	std::cout << "A godly good doggo has been duplicated by operator" << std::endl;

	return *this;
}

void Dog::makeSound() const {
	std::cout << "Bark" << std::endl;
}

