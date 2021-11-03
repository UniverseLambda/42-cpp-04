#include "Ice.hpp"

#include <iostream>

Ice::Ice(): AMateria("ice") {
}

Ice::Ice(const Ice &cpy): AMateria(cpy) {
	mType = "ice";
}

Ice::~Ice() {
}


Ice &Ice::operator=(const Ice &rhs) {
	AMateria::operator=(rhs);

	return *this;
}


AMateria *Ice::clone() const {
	Ice *cpy = new Ice(*this);

	return cpy;
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
