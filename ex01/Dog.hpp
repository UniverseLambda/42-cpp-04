#pragma once

#include "Animal.hpp"

#include "Brain.hpp"

class Dog: public Animal {
private:
	Brain *mBrain;

public:
	Dog();
	Dog(const Dog &cpy);
	virtual ~Dog();

	Dog &operator=(const Dog &rhs);

	virtual void makeSound() const;
};
