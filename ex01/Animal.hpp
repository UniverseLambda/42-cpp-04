#pragma once

#include <string>

class Animal {
protected:
	std::string mType;

public:
	Animal();
	Animal(const Animal &cpy);
	virtual ~Animal();

	Animal &operator=(const Animal &rhs);

	const std::string &getType() const;
	virtual void makeSound() const;
};

