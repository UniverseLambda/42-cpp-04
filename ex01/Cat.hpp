#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
private:
	Brain *mBrain;

public:
	Cat();
	Cat(const Cat &cpy);
	virtual ~Cat();

	Cat &operator=(const Cat &rhs);

	virtual void makeSound() const;
};
