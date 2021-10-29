#include "Brain.hpp"

#include <exception>
#include <sstream>

std::size_t Brain::sInstanceCount = 0;

Brain::Brain() {
	for (std::size_t i = 0; i < sIdeaCount; ++i) {
		std::ostringstream buff;

		buff << "instance " << sInstanceCount;
		buff << " has idea " << i;

		mIdeas[i] = buff.str();
	}

	++sInstanceCount;
}

Brain::Brain(const Brain &cpy) {
	for (std::size_t i = 0; i < sIdeaCount; ++i) {
		mIdeas[i] = cpy.mIdeas[i];
	}
}

Brain::~Brain() {
}

Brain &Brain::operator=(const Brain &rhs) {
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
