#include "Jeu.hpp"

#include <string>

Jeu::Jeu() {}

using namespace std;



void Jeu::jouer(){
	//google::InitGoogleLogging("log_chifoumi");
	//google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
	while(_jeuEnCours){
		choix _choice=getJoueurChoice();
		displayRes(_choice);
	}
}

choix Jeu::getJoueurChoice(){
	string ch;
	choix choice;
	cout<<"Votre Choix ? Rock(r),Paper(p),Scissors(s),Quit(q) : "<<endl;
	cin>>ch;
	if(ch=="r"){
		choice=rock;
	}else if(ch=="p"){
		choice=paper;
	}else if(ch=="s"){
		choice=scissors;
	}else if(ch=="q"){
		choice=quit;
	}else if(ch!="r" || ch!="p" || ch!="s" || ch!="q"){
		cout<<"Erreur"<<endl;
		getJoueurChoice();
	}
		
	return choice;
}
	
	


void Jeu::displayRes(choix choice){
	IA=(choix) _random(3);
	
	
	int result; //0=draw 1=won -1=lost
	
	switch(choice){
		case rock:
			if(IA==rock){
				result=0;
			}else if(IA==paper){
				result=1;
			}else if(IA==scissors){
				result=-1;
			}
		break;
		case paper:
			if(IA==rock){
				result=1;
			}else if(IA==paper){
				result=0;
			}else if(IA==scissors){
				result=-1;
			}
		break;
		case scissors:
			if(IA==rock){
				result=-1;
			}else if(IA==paper){
				result=1;
			}else if(IA==scissors){
				result=0;
			}
		break;
		case quit:
			cout<<"Au revoir !"<<endl;
			_jeuEnCours=false;
		break;
	}
	
	switch(result){
		case 0:
			cout<<"draw( "<<choice<<" - "<<IA<<" )"<<endl;
		break;
		case 1:
			cout<<"won( "<<choice<<" - "<<IA<<" )"<<endl;
		break;
		case -1:
			cout<<"lost( "<<choice<<" - "<<IA<<" )"<<endl;
		break;
	}
}
	
