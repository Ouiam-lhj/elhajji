#ifndef YOSHI_H_
#define YOSHI_H_

#include "Character.h"
#include <string>

class Yoshi : public Character {

    public:
        //Defauly constructeur
	    Yoshi();
		//Constructor crests
		Yoshi(int crests);
	//Destructeur
		~Yoshi() override;
		void Accelerate() override;

        //WhatAmI
		std::string WhatAmI() const override;

		int how_many_crests() const;
		protected:
			int* crest_;
};

#endif
