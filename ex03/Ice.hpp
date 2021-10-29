#pragma once

#include "AMateria.hpp"

class Ice: public AMateria {
private:

public:
	Ice();
	Ice(const Ice &cpy);
	virtual ~Ice();

	Ice &operator=(const Ice &rhs);

	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};
