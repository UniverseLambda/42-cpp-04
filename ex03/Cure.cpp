#include "Cure.hpp"

#include <iostream>

Cure::Cure(): AMateria("cure") {
}

Cure::Cure(const Cure &cpy): AMateria(cpy) {
	mType = "cure";
}

Cure::~Cure() {
}


Cure &Cure::operator=(const Cure &rhs) {
	AMateria::operator=(rhs);

	return *this;
}


AMateria *Cure::clone() const {
	Cure *cpy = new Cure(*this);

	return cpy;
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
