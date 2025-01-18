#include "Character.h"
#include <iostream>
#include <vector>
#include "Character.h"
#include "Mario.h"
#include "Mario.cpp"
#include "Yoshi.cpp"
#include "Yoshi.h"
#include <iostream>
#include <string>

using namespace std;



int main() {
	cout << "Hello World!" << endl;
	Mario driver_mario; // Pointeur de type base vers un objet dérivé
	std::cout << driver_mario.WhatAmI() << std::endl; // Appel polymorphique à WhatAmI
	std::cout<<"Driver one speed is : "<<driver_mario.speed()<<std::endl;
	std::cout<<"The max speed is : "<<driver_mario.max_speed()<<std::endl;
	std::cout<<"Acceleration ! "<<std::endl;
	driver_mario.Accelerate();
	std::cout<<"Driver one speed is : "<<driver_mario.speed()<<std::endl;
	std::cout<<"Brake ! "<<std::endl;
	driver_mario.Break();
	std::cout<<"Driver one speed is : "<<driver_mario.speed()<<std::endl;
	Yoshi driver2_yoshi;
	//Driver2.nb_crest();
	std::cout<<"Driver two is : "<<std::endl;
	std::cout<<driver2_yoshi.WhatAmI()<<std::endl;
	std::cout<<"Acceleration ! "<<std::endl;
	driver2_yoshi.Accelerate();
	std::cout<<"Driver two speed is : "<<driver2_yoshi.speed()<<std::endl;
	driver2_yoshi.Break();
	driver2_yoshi.Break();
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

