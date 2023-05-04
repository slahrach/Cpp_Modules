#include <iostream>
#include <string>
#pragma once

class Brain
{
	std::string ideas[100];
	public :
	Brain(void);
	~Brain(void);
	Brain(Brain & copy);
	Brain& operator=(Brain& obj);
	std::string getIdea(int index)const;
	void setIdea(int index, std::string str);
};