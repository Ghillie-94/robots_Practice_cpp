#include "RoboDog.h"
#include <iostream>

RoboDog::RoboDog()
	: name("")
	, master(nullptr)
{
	std::cout << "Robodog was constructed using default constructor" << std::endl;
}

RoboDog::RoboDog(std::string newName)
	: name(newName)
	, master(nullptr)
{
	std::cout << "Robodog was constructed using parameters" << std::endl;
}

RoboDog::~RoboDog()
{
	std::cout << "RoboDog " << name << " was destroyed" << std::endl;
}
