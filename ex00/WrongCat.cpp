#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "There's something wrong with this devil creature I created... It's darker than usual..." << std::endl;
	mType = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy) {
	std::cout << "There's something wrong with this devil creature I copied... It's darker than usual..." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "There's something wrong with this devil creature I destructed... It's darker than usual..." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	WrongAnimal::operator=(rhs);
	std::cout << "There's something wrong with this devil creature I copied by operator... It's darker than usual..." << std::endl;

	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow-ish" << std::endl;
}
