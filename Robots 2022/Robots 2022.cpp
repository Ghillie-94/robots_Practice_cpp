// Robots 2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Robot.h"
#include "RoboDog.h"
#include "Chatroom.h"


void IntroduceRobot(
    std::string name, 
    std::string colour, 
    float weight)
{
    std::cout << "HELLO MY NAME IS " << name
        << ". I HAVE " << colour << " EYES AND WEIGH "
        << weight << " WEIGHT UNITS." << std::endl 
        << "NICE TO MEET YOU." << std::endl;
}

void IntroduceRobot(Robot toIntroduce)
{
    std::cout << "HELLO MY NAME IS " << toIntroduce.name
        << ". I HAVE " << toIntroduce.eyeColour << " EYES AND WEIGH "
        << toIntroduce.weight << " WEIGHT UNITS." << std::endl
        << "I COST " << toIntroduce.price << " POUNDS." << std::endl
        << "NICE TO MEET YOU." << std::endl;
}


int main()
{

    // Make some data representing our robots
    // Use this data to introduce our robots
    /*
    std::string robotName1 = "Atlas";
    std::string robotName2 = "Peabody";
    std::string robotEyeColour1 = "Blue";
    std::string robotEyeColour2 = "Orange";
    float robotweight1 = 200.0f;
    float robotweight2 = 150.0f;

    IntroduceRobot(robotName1, robotEyeColour1, robotweight1);
    IntroduceRobot(robotName2, robotEyeColour2, robotweight2);
    */

    /*

    // Declaring an instance of the robot class as a local variable
    Robot atlas; // creates an instance

    atlas.name = "Atlas";
    atlas.eyeColour = "Blue";
    atlas.weight = 200.0f;
    atlas.price = 300.0f;

    Robot robot2;

    robot2.name = "Peabody";
    robot2.eyeColour = "Orange";
    robot2.weight = 150.0f;
    robot2.price = 100.0f;


    Robot robot3;

    robot3.name = "Esmerelda";
    robot3.eyeColour = "Green";
    robot3.weight = 100.0f;
    robot3.price = 700.0f;

    //atlas.IntroduceSelf();
    //robot2.IntroduceSelf();
    //robot3.IntroduceSelf();

    Robot robot4;
    //robot4.IntroduceSelf();

    Robot robot5("Wheatley", "Blue", 300, 1);
    //robot5.IntroduceSelf();

    std::vector<Robot> robotVector;
    robotVector.push_back(atlas);
    robotVector.push_back(robot2);
    robotVector.push_back(robot5);

    //robotVector[0].weight = 0.0f;
    //robotVector[0].IntroduceSelf();
    //atlas.IntroduceSelf();

    for (int i = 0; i < robotVector.size(); ++i)
    {
        //robotVector[i].IntroduceSelf();
    }

    atlas.AddColourResponse("pink", "I love that colour, it's the colour of bubblegum.");
    atlas.AddColourResponse("black", "Ewww, too edgy.");
    atlas.AddColourResponse("green", "Oh, like emeralds!");

    atlas.IntroduceSelf();

    std::cout << "What is your favourite colour?" << std::endl;

    std::string userResponse;
    std::cin >> userResponse;

    std::cout << atlas.GetColourResponseFor(userResponse) << std::endl;

    RoboDog dog1("Potato");
    robot5.pet = dog1;

    std::cout << "Robot " << robot5.name
        << " has a dog named " << robot5.pet.name << std::endl;


    std::map<std::string, Robot> robotMap;
    robotMap[atlas.name] = atlas;
    robotMap[robot2.name] = robot2;
    robotMap[robot5.name] = robot5;


    if (robotMap.find("Wheatley") != robotMap.end())
    {
        robotMap["Wheatley"].IntroduceSelf();

    }


    std::map<std::string, Robot>::iterator it;
    for (it = robotMap.begin(); it != robotMap.end(); ++it)
    {
        // it->first is the KEY in the key value pair
        std::cout << "Robot " << it->first << " introduction:" << std::endl;
        // it->second is the VALUE in the key value pair
        it->second.IntroduceSelf();
    }



    //IntroduceRobot(atlas);
    //IntroduceRobot(robot2);
    //IntroduceRobot(robot3);

    Chatroom room1;
    room1.StartChat();
    */

    /*
    int a = 2;
    std::cout << &a << std::endl;

    int& b(a);

    std::cout << &b << std::endl;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    int c = 5;

    b = c;
    std::cout << &a << std::endl;
    std::cout << &b << std::endl;
    std::cout << &c << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;*/
    
/*RoboDog dog1("Fido");
Robot robot1("Bob", "Yellow", 1000, 9999999, dog1);
    Robot& robotAlias(robot1);

    std::cout << &dog1 << std::endl;
    std::cout << &(robot1.pet) << std::endl;
    /*
    robot1.IntroduceSelf();


    std::string myName = "McLovin";
    std::cout << myName << std::endl;

    robot1.RespondToName(myName);

    std::cout << myName << std::endl; */
    /*int a = 5;

    std::cout << "Address of a = " << &a << std::endl;
    std::cout << "Value of a = " << a << std::endl;
    std::cout << "value at address of a = " << *(&a) << std::endl;
    std::cout << "Address of the value at address of a = " << &(*(&a)) << std::endl;

    int* p = nullptr;

    p = &a;

    int b = *p;

    RoboDog dog1 = RoboDog("Frodo");
    RoboDog* dogPtr = nullptr;

    dogPtr = &dog1;
    if (dogPtr != nullptr) 
    {
        (*dogPtr).name;
        //same thing as above
        dogPtr->name;
    }

    Robot bot1 = Robot("Bobette", "Purple", 100, 10000, nullptr);
    bot1.SetPet(dogPtr);

    std::cout << "Now introducing robot at address " << &bot1 << std::endl;

    bot1.IntroduceSelf();

    std::cout << "Dog has pointer to robot: " << dogPtr->master << std::endl;*/
    /*int i = 5;

    int* ptr1 = &i;

    std::cout << "value of i = " << i << std::endl;
    std::cout << "Address of i = " << &i << std::endl;

    std::cout << "value of ptr1 = " << ptr1 << std::endl;
    std::cout << "address of ptr1 = " << &ptr1 << std::endl;
    std::cout << "dereference of ptr1 = " << *ptr1 << std::endl;

    // create a pointer and use the new keyword to
    // dyanmically allocate an integer, get its address, and 
    //store that address in the pointer
    int* ptr2 = new int(7);

    std::cout << "value of ptr2 = " << ptr2 << std::endl;
    std::cout << "address of ptr2 = " << &ptr2 << std::endl;
    std::cout << "dereference of ptr2 = " << *ptr2 << std::endl;

    *ptr2 = 20;

    std::cout << "value of ptr2 = " << ptr2 << std::endl;
    std::cout << "address of ptr2 = " << &ptr2 << std::endl;
    std::cout << "dereference of ptr2 = " << *ptr2 << std::endl;

    delete ptr2;

    ptr2 = nullptr;

    std::cout << "value of ptr2 = " << ptr2 << std::endl;
    std::cout << "address of ptr2 = " << &ptr2 << std::endl;
    //std::cout << "dereference of ptr2 = " << *ptr2 << std::endl;*/

    RoboDog dog1 = RoboDog("Plant");
    
    //dynamically allocated robot
    Robot* botPtr = new Robot("Wall-E", "Brown", 100, 1, &dog1);

    //botPtr->CreateDog("Roach");

    botPtr->IntroduceSelf();

    delete botPtr;

    botPtr = nullptr;

    std::cout << "Printing dog name: " << dog1.name << std::endl;



    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
