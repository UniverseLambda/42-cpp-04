#pragma once

#include <string>

class Brain {
private:
	static const std::size_t sIdeaCount = 100;

	static std::size_t sInstanceCount;

	std::string mIdeas[sIdeaCount];

public:
	Brain();
	Brain(const Brain &cpy);
	~Brain();

	Brain &operator=(const Brain &rhs);

	std::string &at(std::size_t idx);
};

