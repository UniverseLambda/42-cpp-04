#pragma once

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
private:
	AMateria *mLearnedMateria[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &cpy);
	virtual ~MateriaSource();

	MateriaSource &operator=(const MateriaSource &rhs);

	virtual void learnMateria(AMateria* materia);
	virtual AMateria *createMateria(const std::string &type);
};
