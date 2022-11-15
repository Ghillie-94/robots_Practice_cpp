#pragma once

#include <string>
#include <map>

class RoboDog;

class Robot
{
public:

	Robot();
	Robot(std::string newName, std::string newEyeColour, float newWeight, float newPrice, RoboDog* newRoboDog);

	~Robot();

	void IntroduceSelf();
	void AddColourResponse(std::string colour, std::string response);
	std::string GetColourResponseFor(std::string colour);
	void SetPet(RoboDog* newPet);

	void RespondToName(std::string& playerName);

	void CreateDog(std::string dogName);

	std::string name;
	std::string eyeColour;
	float weight;
	float price;
	std::map<std::string, std::string> colourResponse;
	RoboDog* pet;
};

