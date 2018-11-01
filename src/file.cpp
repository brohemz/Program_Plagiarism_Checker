#ifdef FILE_H
#include <stdio.h>
#include "file.hpp"


//	Constructor - reads file into vector
File::File (const std::string file_name){
	mData = new std::vector<std::pair<std::string, bool>>();
	mSize = mData->size();
	percentageMatch = -1;

	int file_status = fillFile(file_name);

	if(file_status == -1){
		std::cerr << "Cant open " << file_name << '\n';
		exit(EXIT_FAILURE);
	}else if(file_status == 0){
		std::cerr << "File:	" << file_name << "\n";
		std::cerr << "Error: Not enough data to compare. Five word minimum." << "\n";
		exit(EXIT_FAILURE);
	}


}


//	Fills vector mData with each word from given file
int File::fillFile(const std::string file_name){
	//Input variables
	char rover;
	std::string word = "";


	//Input from file to mData for file
	FILE *file;
	file = fopen(file_name.c_str(), "r");
	mFileName = file_name;
	int count = 0;

	if(!file){
		return -1;
	}else {
		while((rover = fgetc(file)) != EOF){
			if(rover == ' ' || rover == '\n'){
				word += rover;
				mData->push_back(std::make_pair(word, false));
				word = "";
				rover = fgetc(file);
				count++;
			}
			word += rover;
		}
	}
	if(count < 5)
		return 0;
	rover = '\0';
	word = "";
	fclose(file);
	mSize = mData->size();
	return 1;
}

void File::print(){
	for(std::pair<std::string, bool> pair : *mData)
		std::cout << pair.first << " ";
}

void File::printMarked(){
	for(std::pair<std::string, bool> pair : *mData)
		if(pair.second)
			std::cout << pair.first;
}

std::string File::operator[](const int pos){
	return mData->at(pos).first;
}

bool File::operator==(File* fi) const{
	if(mSize == fi->getWordCount()){
		for(int i = 0; i < mSize; i++){
			if((mData->at(i)).first != (*fi)[i]);
				return false;
		}
	}else{
		return false;
	}
	return true;
}

int File::getWordCount(){
	return mSize;
}

std::string File::getFileName(){
	return mFileName;
}

bool File::markFile(int pos){
	mData->at(pos).second = true;
}

bool File::isMarked(int pos){
	return mData->at(pos).second;
}

File::~File(){
	delete mData;
}



#endif
