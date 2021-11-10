#include "Dog.hpp"

#include <iostream>

Dog::Dog(): Animal() {
	std::cout << "Doggo constructed" << std::endl;

	mType = "Dog";
	mBrain = new Brain();
}

Dog::Dog(const Dog &cpy): Animal(cpy) {
	std::cout << "Doggo copied" << std::endl;

	mBrain = new Brain(*(cpy.mBrain));
	std::cout << "Copy brain ptr: " << mBrain << " Origin brain ptr: " << cpy.mBrain << std::endl;
	for (std::size_t i = 0; i < 100; ++i) {
		std::cout << mBrain->at(i) << std::endl;
	}
}

Dog::~Dog() {
	std::cout << "Doggo destructed" << std::endl;
	delete mBrain;
}

Dog &Dog::operator=(const Dog &rhs) {
	Animal::operator=(rhs);

	std::cout << "Doggo copied with operator" << std::endl;

	delete mBrain;
	mBrain = new Brain(*(rhs.mBrain));

	return *this;
}

void Dog::makeSound() const {
	std::cout << "Bark" << std::endl;
}
