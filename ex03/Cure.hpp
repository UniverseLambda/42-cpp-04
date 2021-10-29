#pragma once

#include "AMateria.hpp"

class Cure: public AMateria {
public:
	Cure();
	Cure(const Cure &cpy);
	virtual ~Cure();

	Cure &operator=(const Cure &rhs);
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};
