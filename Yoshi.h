#ifndef YOSHI_H_
#define YOSHI_H_

#include "Character.h"
#include <string>

class Yoshi : public Character {

    public:
        //Constructeur
	    Yoshi();

	//Destructeur
		~Yoshi() override;
		virtual void Accelerate() override;

        //WhatAmI
	    virtual std::string WhatAmI() const;


};

#endif
