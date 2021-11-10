#include "Brain.hpp"

#include <exception>
#include <sstream>

#include <iostream>

std::size_t Brain::sInstanceCount = 0;

Brain::Brain() {
	std::cout << "Brain constructed" << std::endl;

	for (std::size_t i = 0; i < sIdeaCount; ++i) {
		std::ostringstream buff;

		buff << "instance " << sInstanceCount;
		buff << " has idea " << i;

		mIdeas[i] = buff.str();
	}

	++sInstanceCount;
}

Brain::Brain(const Brain &cpy) {
	std::cout << "Brain copied" << std::endl;
	for (std::size_t i = 0; i < sIdeaCount; ++i) {
		mIdeas[i] = cpy.mIdeas[i];
	}
}

Brain::~Brain() {
	std::cout << "Brain destructed" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs) {
	std::cout << "Brain copied with operator" << std::endl;
	for (std::size_t i = 0; i < sIdeaCount; ++i) {
		mIdeas[i] = rhs.mIdeas[i];
	}

	return *this;
}

std::string &Brain::at(std::size_t idx) {
	if (idx >= sIdeaCount)
		throw std::length_error("This brain can't handle that many ideas");
	return mIdeas[idx];
}
