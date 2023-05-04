#include "catDog.hpp"
int main()
{
	//deep copy testing
	Cat kitty;
	Cat cuteCat;
	kitty.setBrainIdea(0, "when hungry meaw meaw");
	cuteCat = kitty;
	std::cout << kitty.getBrainIdea(0) << std::endl;
	std::cout << cuteCat.getBrainIdea(0) << std::endl;
	kitty.setBrainIdea(0, "only meaw, no barking");
	std::cout << kitty.getBrainIdea(0) << std::endl;
	std::cout << cuteCat.getBrainIdea(0) << std::endl << std::endl << std::endl;


	int i = 0;
	Animal *anim[10];
	while (i < 10)
	{
		if (i < 5)
			anim[i] = new Cat();
		else
			anim[i] = new Dog();
		anim[i]->makeSound();
		i++;
	}
	i = 0;
	std::cout << std::endl;
	while (i < 10)
	{
		delete anim[i];
		i++;
	}
}