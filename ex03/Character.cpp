#include "Character.hpp"

#include "AMateria.hpp"

Character::Character(const std::string &name): mName(name) {
	for (std::size_t i = 0; i < 4; ++i) {
		mMateria[i] = NULL;
	}
}

Character::Character(const Character &cpy): mName(cpy.mName) {
	for (std::size_t i = 0; i < 4; ++i) {
		if (cpy.mMateria[i] != NULL) {
			mMateria[i] = cpy.mMateria[i]->clone();
		} else {
			mMateria[i] = NULL;
		}
	}
}

Character::~Character() {
	for (std::size_t i = 0; i < 4; ++i) {
		if (mMateria[i] != NULL) {
			delete mMateria[i];
		}
	}
}


Character &Character::operator=(const Character &rhs) {
	mName = rhs.mName;
	for (std::size_t i = 0; i < 4; ++i) {
		if (mMateria[i] != NULL) {
			delete mMateria[i];
		}

		if (rhs.mMateria[i] != NULL) {
			mMateria[i] = rhs.mMateria[i]->clone();
		} else {
			mMateria[i] = NULL;
		}
	}

	return *this;
}

const std::string &Character::getName() const {
	return mName;
}

void Character::equip(AMateria* m) {
	for (std::size_t i = 0; i < 4; ++i) {
		if (mMateria[i] == NULL) {
			mMateria[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4 || mMateria[idx] == NULL) {
		return;
	}
	mMateria[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4 || mMateria[idx] == NULL) {
		return;
	}
	mMateria[idx]->use(target);
}
