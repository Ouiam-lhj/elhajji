#include "Character.h"
#include "Mario.h"
#include "Yoshi.h"
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Hello World!" << std::endl;

    // Mario driver
    Mario driver_mario;
    std::cout << driver_mario.WhatAmI() << std::endl;
    std::cout << "Driver one speed is: " << driver_mario.speed() << std::endl;
    std::cout << "The max speed is: " << driver_mario.max_speed() << std::endl;
    std::cout << "Acceleration!" << std::endl;
    driver_mario.Accelerate();
    std::cout << "Driver one speed is: " << driver_mario.speed() << std::endl;
    std::cout << "Brake!" << std::endl;
    driver_mario.Break();
    std::cout << "Driver one speed is: " << driver_mario.speed() << std::endl;

    // Yoshi driver
    Yoshi driver2_yoshi;
    std::cout << "Driver two is: " << std::endl;
    std::cout << driver2_yoshi.WhatAmI() << std::endl;
    std::cout << "Acceleration!" << std::endl;
    driver2_yoshi.Accelerate();
    std::cout << "Driver two speed is: " << driver2_yoshi.speed() << std::endl;
    driver2_yoshi.Break();
    driver2_yoshi.Break();

    return 0;
}
