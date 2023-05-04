#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
	std::string _type;
	public :
	Animal(void);
	Animal(Animal& copy);
	Animal& operator=(Animal& obj);
	virtual ~Animal(void);
	virtual void makeSound(void) const;
	void setType(std::string str);
	std::string getType(void) const;

};

class WrongAnimal
{
	protected:
	std::string _type;
	public :
	WrongAnimal(void);
	WrongAnimal(WrongAnimal& copy);
	WrongAnimal& operator=(WrongAnimal obj);
	~WrongAnimal(void);
	void makeSound(void) const;
	std::string getType(void) const;
};