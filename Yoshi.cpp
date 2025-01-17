#include "Yoshi.h"
#include "Character.h"

#include <string>
#include <iostream>

//Constructor
Yoshi::Yoshi(): Character(){}

//Destructor
Yoshi::~Yoshi() = default;

//WhatAmI
std::string Yoshi::WhatAmI() const{
	return "Yoshi";
}
// Surcharge de Accelerate
void Yoshi::Accelerate() {
    speed_ += 2; // Yoshi accélère deux fois plus vite
    if (speed_ > max_speed_) {
        speed_ = max_speed_;
        std::cout << "Yoshi has reached maximum speed, no further acceleration possible." << std::endl;
    }
}
