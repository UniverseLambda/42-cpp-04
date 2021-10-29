#pragma once

#include "ICharacter.hpp"

class Character: public ICharacter {
private:
	std::string mName;
	AMateria *mMateria[4];

public:
	Character(const std::string &name);
	Character(const Character &cpy);
	virtual ~Character();

	Character &operator=(const Character &rhs);

	virtual const std::string &getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};
