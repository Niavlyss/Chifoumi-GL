#include <CppUTest/CommandLineTestRunner.h>

#include "Jeu.hpp"

TEST_GROUP(GroupJeu) { };

TEST(GroupJeu, Jeu_running) { 
     Jeu jeuTest;
     CHECK_EQUALS(true, Jeu::_jeuEnCours);
}


TEST(GroupJeu, Jeu_equitable){
	Jeu jeuTest;
	choix joueur=rock;
	int r=0,p=0,s=0;
	for(int i=0;i<1000;i++){
		jeuTest.displayRes(joueur);
		if(IA==rock){
			r++;
		}else if(IA==paper){
			p++;
		}else if(IA==scissors){
			s++;
		}
	}
	if(!(r/i>0.25 && r/i<0.35)){
		FAIL("Non équitable");
	}
}
