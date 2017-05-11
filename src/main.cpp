#include <iostream>
#include <glog/logging.h>

#include "Jeu.hpp"

int main(){
	std::cout<<"Hello World !"<<std::endl;
	google::InitGoogleLogging("log_chifoumi");
	google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
	LOG(INFO) << "Found 42 cookies ";
	
	Jeu jeu;
	jeu.jouer();
	return 0;
}



