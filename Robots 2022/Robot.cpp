#include "Robot.h"
#include <iostream>
#include "RoboDog.h"

Robot::Robot()
    : name("")
    , eyeColour("")
    , weight(0)
    , price(0)
    , colourResponse()
    , pet(nullptr)
{
    std::cout << "Robot constructed!" << std::endl;
}

Robot::Robot(std::string newName, std::string newEyeColour, float newWeight, float newPrice, RoboDog* newRoboDog)
    : name(newName)
    , eyeColour(newEyeColour)
    , weight(newWeight)
    , price(newPrice)
    , colourResponse()
    , pet(newRoboDog)
{
    std::cout << "Robot constructed using parameters!" << std::endl;
}

Robot::~Robot()
{
    if (pet != nullptr) 
    {
        delete pet;
        pet = nullptr;
    }


    std::cout << "Robot " << name <<" destroyed." << std::endl;
}

void Robot::IntroduceSelf()
{
    std::cout << "HELLO MY NAME IS " << name
        << ". I HAVE " << eyeColour << " EYES AND WEIGH "
        << weight << " WEIGHT UNITS." << std::endl
        << "I COST " << price << " POUNDS." << std::endl
        << "NICE TO MEET YOU." << std::endl;

    std::cout << "my memory address is " << this << std::endl;
    // if the pet exists
    if (pet != nullptr) 
    {
        std::cout << "OH I ALSO HAVE A DOG NAMED " << pet->name << std::endl;
    }
}

void Robot::AddColourResponse(std::string colour, std::string response)
{
    colourResponse[colour] = response;
}

std::string Robot::GetColourResponseFor(std::string colour)
{
    return colourResponse[colour];
}

void Robot::SetPet(RoboDog* newPet)
{
    pet = newPet;

    pet->master = this;
}

void Robot::RespondToName(std::string& playerName)
{
    std::cout << "Hello " + playerName + "!" << std::endl;
    std::string nickName = playerName.substr(0, 3);
    std::cout << "Can I call you " + nickName + "?" << std::endl;
    std::string response;
    std::cin >> response;

    if (response == "Y") 
    {
        playerName = nickName;
        std::cout << "okay nice to meet you " + playerName << std::endl;

    }
    else 
    {
        std::cout << "okay I will call you " + playerName << std::endl;
    }


}

void Robot::CreateDog(std::string dogName)
{
    //if there is already a pet
    if (pet != nullptr) 
    {
        // do nothing pet already exists
        return;
    }

    // we know there is no pet
    // create one!

    pet = new RoboDog(dogName);


}
