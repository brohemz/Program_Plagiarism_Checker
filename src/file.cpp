#ifdef FILE_H
#include <stdio.h>
#include "file.hpp"


//	Constructor - reads file into vector
File::File (const std::string file_name){
	mData = new std::vector<std::pair<std::string, bool>>();
	mSize = mData->size();
	percentageMatch = -1;

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
			if(rover == ' ' || rover == '\n'){
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
	mSize = mData->size();
	return true;
}

void File::print(){
	for(std::pair<std::string, bool> pair : *mData)
		std::cout << pair.first << " ";
}

void File::printMarked(){
	for(std::pair<std::string, bool> pair : *mData)
		if(pair.second)
			std::cout << "\n" << pair.first << " ";
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
