#pragma once

#include <string>

#include "ICharacter.hpp"

class AMateria {
protected:
	std::string mType;

public:
	AMateria(const std::string &type);
	AMateria(const AMateria &cpy);
	virtual ~AMateria();

	AMateria &operator=(const AMateria &rhs);

	const std::string &getType() const;

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};
