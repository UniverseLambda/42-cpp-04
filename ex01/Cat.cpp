#include "Cat.hpp"

#include <iostream>

Cat::Cat(): Animal() {
	std::cout << "Human Destructor constructed" << std::endl;

	mType = "Cat";
	mBrain = new Brain();
}

Cat::Cat(const Cat &cpy): Animal(cpy) {
	std::cout << "Human Destructor copied" << std::endl;

	mBrain = new Brain(*(cpy.mBrain));
	std::cout << "Copy brain ptr: " << mBrain << " Origin brain ptr: " << cpy.mBrain << std::endl;
	for (std::size_t i = 0; i < 100; ++i) {
		std::cout << mBrain->at(i) << std::endl;
	}
}

Cat::~Cat() {
	std::cout << "Human Destructor destructed" << std::endl;

	delete mBrain;
}

Cat &Cat::operator=(const Cat &rhs) {
	Animal::operator=(rhs);

	std::cout << "Human Destructor copied with operator" << std::endl;

	delete mBrain;
	mBrain = new Brain(*(rhs.mBrain));

	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
