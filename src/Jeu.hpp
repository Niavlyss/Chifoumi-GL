#ifndef JEU_HPP_
#define JEU_HPP_

#include <iostream>
#include <string>
#include "Random.hpp"

enum choix{rock,paper,scissors,quit};


class Jeu{
	public :
		Jeu();
		void jouer();
		choix getJoueurChoice();
		void displayRes(choix _choix);
		choix IA;
		Random _random;
	private :
		bool _jeuEnCours=true;
		choix _choixJoueur;
};
		
		
		
		
		
		
		
		
		
		
#endif
