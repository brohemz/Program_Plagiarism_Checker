#ifdef FILE_H
#include <stdio.h>
#include "file.hpp"


//	Constructor - reads file into vector
File::File (const std::string file_name){
	mData = new std::vector<std::pair<std::string, bool>>();

	fill(file_name);

}


//	Fills vector mData with each word from given file
bool File::fill(const std::string file_name){
	//Input variables
	char rover;
	std::string word = "";


	//Input from file to mData for file
	FILE *file;
	file = fopen(file_name.c_str(), "r");

	if(!file){
		std::cout << "Cant open " << file_name << '\n';
		return false;
	}else {
		while((rover = fgetc(file)) != EOF){
			if(rover == '\n'){
				mData->push_back(std::make_pair(word, false));
				word = "";
				rover = fgetc(file);
			}
			word += rover;
		}
	}
	rover = '\0';
	word = "";
	fclose(file);
	return true;
}

void File::print(){
	for(std::pair<std::string, bool> pair : *mData)
		std::cout << pair.first << " ";
}

File::~File(){
	delete mData;
}



#endif
