#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (std::size_t i = 0; i < 4; ++i) {
		mLearnedMateria[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &cpy) {
	for (std::size_t i = 0; i < 4; ++i) {
		if (cpy.mLearnedMateria[i] != NULL) {
			mLearnedMateria[i] = cpy.mLearnedMateria[i]->clone();
		} else {
			mLearnedMateria[i] = NULL;
		}
	}
}

MateriaSource::~MateriaSource() {
	for (std::size_t i = 0; i < 4; ++i) {
		if (mLearnedMateria[i] != NULL) {
			delete mLearnedMateria[i];
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	for (std::size_t i = 0; i < 4; ++i) {
		if (mLearnedMateria[i] != NULL) {
			delete mLearnedMateria[i];
		}

		if (rhs.mLearnedMateria[i] != NULL) {
			mLearnedMateria[i] = rhs.mLearnedMateria[i]->clone();
		} else {
			mLearnedMateria[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia) {
	for (std::size_t i = 0; i < 4; ++i) {
		if (mLearnedMateria[i] == NULL) {
			mLearnedMateria[i] = materia;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string &type) {
	for (std::size_t i = 0; i < 4; ++i) {
		if (mLearnedMateria[i] != NULL && mLearnedMateria[i]->getType() == type) {
			return mLearnedMateria[i]->clone();
		}
	}
	return static_cast<AMateria *>(0);
}
