#pragma once

#include "Animal.hpp"

class Dog: public Animal {
public:
	Dog();
	Dog(const Dog &cpy);
	virtual ~Dog();

	Dog &operator=(const Dog &rhs);

	virtual void makeSound() const;
};
