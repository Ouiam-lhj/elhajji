#include "Character.h"

#include <iostream>
#include <string>

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

