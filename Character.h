#include<iostream>
using namespace std;
#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
	public :
		// constructeur
		Character(); 
		// destructeur 
		virtual ~Character();

		// méthodes
		void Accelerate();
		void Break();
		
		// Accesseur en ligne 
    		virtual inline float speed() const { return speed_; }

		// Ajouter une fonction virtuelle pure
        	virtual std::string WhatAmI() const = 0;		
// Ce qui arrive lors de la compilation : la classe Character devient abstraite "à cause" de la fonction virtuelle pure.
// Cela oblige toutes les classes dérivées à implémenter cette fonction pour pouvoir être instanciées.

	protected:
		float speed_;
		float max_speed_;	
				
	};
#endif
