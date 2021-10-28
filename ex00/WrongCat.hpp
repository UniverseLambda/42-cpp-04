#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &cpy);
	virtual ~WrongCat();

	WrongCat &operator=(const WrongCat &rhs);

	void makeSound() const;
};
