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
    characters.push_back(new Yoshi(3));

    // Giving the character's identities
    std::cout << "Characters! Who are you? :" << std::endl;
    for (const auto& character : characters) {
        std::cout << character->WhatAmI() << std::endl;
    }

    // Both characters accelerations
    std::cout << "\nAcceleration test:" << std::endl;
    int mario_speed = 0;
    int yoshi_speed = 0;

    for (auto& character : characters) {
        character->Accelerate();
        std::cout << character->WhatAmI() << " speed: " << character->speed() << std::endl;
        if (character->WhatAmI().find("Mario") != std::string::npos) {
            mario_speed = character->speed();
        } else if (character->WhatAmI().find("Yoshi") != std::string::npos) {
            yoshi_speed = character->speed();
        }
    }
    // Test to see if Yoshi in fact goes faster than Mario
    if (yoshi_speed > mario_speed) {
        std::cout << "Test of acceleration passed: Yoshi is faster than Mario." << std::endl;
    } else {
        std::cout << "Test of acceleration failed: Mario is faster or equal to Yoshi." << std::endl;
    }

    return 0;
}
