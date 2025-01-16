#include "Character.h"
#include <iostream>
#include <vector>
#include "Character.h"
#include "Mario.h"
#include "Mario.cpp"
#include "Yoshi.h"
#include <iostream>
#include <string>

using namespace std;
int main() {
	cout << "Hello World!" << endl;
	Mario driver; // Pointeur de type base vers un objet dérivé
	std::cout << driver.WhatAmI() << std::endl; // Appel polymorphique à WhatAmI


	return 0;

}

//constructeur par défaut
Character::Character(){
	speed_=0;
	max_speed_ = 10;
}

//Destructeur
Character::~Character() = default;

// Accelerate
void Character::Accelerate(){
	speed_=speed_+1;
	if (speed_+1 > max_speed_){
		speed_=10;
		std::cout<<"Maximum distance reached, no acceleration possible."<<std::endl;
	}
}


//Break
void Character::Break(){
	if (speed_ !=0){
		speed_=speed_-1;
	}
	else{
		std::cout<<"Minimum speed reached, no braking possible "<<std::endl;


	}
}

