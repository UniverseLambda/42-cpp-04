#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat(): WrongAnimal() {
	mType = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy) {
}

WrongCat::~WrongCat() {
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	WrongAnimal::operator=(rhs);

	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow-ish" << std::endl;
}
