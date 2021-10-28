#pragma once

#include "Animal.hpp"

class Cat: public Animal {
public:
	Cat();
	Cat(const Cat &cpy);
	virtual ~Cat();

	Cat &operator=(const Cat &rhs);

	virtual void makeSound() const;
};
