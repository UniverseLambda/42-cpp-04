#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const Animal *array[10];

	for (std::size_t idx = 0; idx < 10; ++idx) {
		if (idx < 5)
			array[idx] = new Cat(*(dynamic_cast<const Cat *>(i)));
		else
			array[idx] = new Dog(*(dynamic_cast<const Dog *>(j)));
	}

	for (std::size_t idx = 0; idx < 10; ++idx) {
		delete array[idx];
	}

	delete j;//should not create a leak
	delete i;
}
