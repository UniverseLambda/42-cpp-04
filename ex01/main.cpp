#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const std::size_t instanceCount = 6;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const Animal *array[instanceCount];

	for (std::size_t idx = 0; idx < instanceCount; ++idx) {
		if (idx < (instanceCount / 2))
			array[idx] = new Cat(*(dynamic_cast<const Cat *>(i)));
		else
			array[idx] = new Dog(*(dynamic_cast<const Dog *>(j)));
	}

	for (std::size_t idx = 0; idx < instanceCount; ++idx) {
		delete array[idx];
	}

	delete j;//should not create a leak
	delete i;
}
