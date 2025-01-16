#include "Mario.h"
#include "Character.h"
#include <string>
#include <iostream>

//Constructeur
Mario::Mario() {}

//Destructor
Mario::~Mario() = default;

//WhatAmI
std::string Mario::WhatAmI() const{
	return "Mario";
}
