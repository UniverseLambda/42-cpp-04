#pragma once

#include <string>

class WrongAnimal {
protected:
	std::string mType;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &cpy);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &rhs);

	const std::string &getType() const;
	void makeSound() const;
};

