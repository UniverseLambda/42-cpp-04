#include "AMateria.hpp"

#include <iostream>

AMateria::AMateria(const std::string &type): mType(type) {
}

AMateria::AMateria(const AMateria &cpy) {
	(void)cpy;
}

AMateria::~AMateria() {
}


AMateria &AMateria::operator=(const AMateria &rhs) {
	(void)rhs;
	return *this;
}

const std::string &AMateria::getType() const {
	return mType;
}

void AMateria::use(ICharacter &target) {
	std::cout << "* uses " << mType << " on " << target.getName() << " *" << std::endl;
}
