#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
	public :
		Cat(void);
		Cat(Cat& copy);
		Cat& operator=(Cat& obj);
		~Cat(void);
		virtual void makeSound(void) const;
		Brain& getBrain(void) const;
		void	setBrainIdea(int index, std::string str);
		std::string getBrainIdea(int index)const;
	private :
		Brain *brain;
};

class Dog : public Animal
{
	public :
		Dog(void);
		Dog(Dog& copy);
		Dog& operator=(Dog& obj);
		~Dog(void);
		virtual void makeSound(void) const;
		Brain& getBrain(void) const;
		void	setBrainIdea(int index, std::string str);
		std::string getBrainIdea(int index)const;
	private :
		Brain *brain;
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