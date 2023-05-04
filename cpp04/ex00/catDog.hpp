#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat(void);
		Cat(Cat& copy);
		Cat& operator=(Cat obj);
		~Cat(void);
		void makeSound(void) const;
};

class Dog : public Animal
{
	public :
		Dog(void);
		Dog(Dog& copy);
		Dog& operator=(Dog obj);
		~Dog(void);
		void makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
	public :
		WrongCat(void);
		WrongCat(WrongCat& copy);
		WrongCat& operator=(WrongCat obj);
		~WrongCat(void);
		void makeSound(void) const;
};