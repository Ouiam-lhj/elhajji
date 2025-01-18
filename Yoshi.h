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
		void Accelerate() override;

        //WhatAmI
		std::string WhatAmI() const override;
		void choose_crest();
		int how_many_crests();
		protected:
			int crest_;
};

#endif
