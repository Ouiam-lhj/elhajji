#include "Yoshi.h"
#include "Character.h"

#include <string>
#include <iostream>

//Default constructor
Yoshi::Yoshi() : crest_(new int(1)) {} // Par défaut, un Yoshi a une crête//Destructor

// Constructeur avec un nombre de crêtes
Yoshi::Yoshi(int crests) : crest_(new int(crests)) {}

//Destructor
Yoshi::~Yoshi() {
delete crest_; // Free the memory allocated for crest_
    }

//WhatAmI
std::string Yoshi::WhatAmI() const{
	return std::to_string(*crest_) + "-crested Yoshi";;
}
// Surcharge de Accelerate
void Yoshi::Accelerate() {
    speed_ += 2; // Yoshi accélère deux fois plus vite
    if (speed_ > max_speed_) {
        speed_ = max_speed_;
        std::cout << "Yoshi has reached maximum speed, no further acceleration possible." << std::endl;
    }
}

// Getter pour le nombre de crêtes
int Yoshi::how_many_crests() const {
    return *crest_;
}