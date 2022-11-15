#pragma once
#include <string>

class Robot;


class RoboDog
{
public:

	RoboDog();
	RoboDog(std::string newName);

	~RoboDog();

	std::string name;

	Robot* master;

};

