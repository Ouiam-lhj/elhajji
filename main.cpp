#include "Character.h"
#include "Character.cpp"

#include "Mario.h"
#include "Mario.cpp"

#include "Yoshi.h"
#include "Yoshi.cpp"

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Hello World!" << std::endl;

    // driver Mario tests
    Mario character_mario;
    std::cout << character_mario.WhatAmI() << std::endl;
    std::cout << "Driver one speed is: " << character_mario.speed() << std::endl;
    std::cout << "The max speed is: " << character_mario.max_speed() << std::endl;
    std::cout << "Acceleration!" << std::endl;
    character_mario.Accelerate();
    std::cout << "Driver one speed is: " << character_mario.speed() << std::endl;
    std::cout << "Brake!" << std::endl;
    character_mario.Break();
    std::cout << "Driver one speed is: " << character_mario.speed() << std::endl;

    // driver Yoshi tests
    Yoshi character2_yoshi;
    std::cout << "Driver two is: " << std::endl;
    std::cout << character2_yoshi.WhatAmI() << std::endl;
    std::cout << "Acceleration!" << std::endl;
    character2_yoshi.Accelerate();
    std::cout << "Driver two speed is: " << character2_yoshi.speed() << std::endl;
    character2_yoshi.Break();
    character2_yoshi.Break();


    // Now let the race begin

    // I chose the "vector" stl container
    std::vector<Character*> characters;

    // Adding one Mario and one Yoshi
    characters.push_back(new Mario);
    characters.push_back(new Yoshi);


    return 0;
}
