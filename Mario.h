#ifndef MARIO_H_
#define MARIO_H_

#include "Character.h"
#include <string>

class Mario : public Character {

    public:
        //Constructeur
	    Mario();

		//Destructeur
	    virtual ~Mario();

        //WhatAmI
		std::string WhatAmI() const override;

};

#endif 