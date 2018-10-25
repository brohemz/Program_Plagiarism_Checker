#ifdef DATA_H
#include <stdio.h>
#include "data.hpp"


//	Constructor - reads file into vector
Data::Data(){

}

bool Data::newFile(const std::string file_name){
	mFiles.push_back(new File(file_name));
}

void Data::printAll(){
	for(File* fi : mFiles){
		fi->print();
		std::cout << "\n";
	}

}

Data::~Data(){
}


#endif
