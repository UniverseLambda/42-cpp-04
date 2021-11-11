#include "Cat.hpp"

#include <iostream>

Cat::Cat(): Animal() {
	std::cout << "A devil creature (cat) has been created" << std::endl;
	mType = "Cat";
}

Cat::Cat(const Cat &cpy): Animal(cpy) {
	std::cout << "A devil creature (cat) duplication" << std::endl;
}

Cat::~Cat() {
	// Check this out Alain Chabat (https://www.youtube.com/watch?v=XkOYGrZQqmU)
	std::cout << "A devil creature destruction (Hi this is the CCC)" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
	Animal::operator=(rhs);
	std::cout << "A devil creature (cat) duplication by operator" << std::endl;

	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
