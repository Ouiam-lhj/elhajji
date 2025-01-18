#include "Yoshi.h"
#include "Character.h"

#include <string>
#include <iostream>

//Constructor
Yoshi::Yoshi() {}
//Destructor
Yoshi::~Yoshi() = default;

//WhatAmI
std::string Yoshi::WhatAmI() const{
	return "It's Yoshi!";
}
// Surcharge de Accelerate
void Yoshi::Accelerate() {
    speed_ += 2; // Yoshi accélère deux fois plus vite
    if (speed_ > max_speed_) {
        speed_ = max_speed_;
        std::cout << "Yoshi has reached maximum speed, no further acceleration possible." << std::endl;
    }
}

//Crests
void Yoshi::choose_crest() {
    int nb_crests;
    std::cout<<"Number of crests of your Yoshi ?"<<std::endl;
    std::cin>>nb_crests;
    crest_ = nb_crests;
}
// Get the number of crests of the Yoshi
int Yoshi::how_many_crests() {
    return crest_;
}
