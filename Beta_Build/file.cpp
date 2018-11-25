#ifdef FILE_H
#include <stdio.h>
#include "file.hpp"
#include <QDebug>
#include <sys/stat.h>

//	Constructor - reads file into vector
File::File (const std::string file_name){
	mData = new std::vector<std::pair<std::string, bool>>();
	mSize = mData->size();
    percentageMatch = 0;
    mMarked = 0;
    std::string fn = file_name;
    mFileName = fn.substr(fn.find_last_of('/') + 1);

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

File::File(const std::string text, const std::string file_name){

    mData = new std::vector<std::pair<std::string, bool>>();
    mSize = mData->size();
    mMarked = 0;
    std::string fn = file_name;
    mFileName = fn.substr(fn.find_last_of('/') + 1);

    std::string word = "";
    int count = 0;

    for(int i = 0; i < text.length(); i++){
        char c = text[i];
        if(c == ' ' || c == '\n'){
            word += c;
            mData->push_back(std::make_pair(word, false));

            word = "";
            count++;

        }

        word += c;
        if(i == text.length() - 1){
            mData->push_back(std::make_pair(word, false));
            word = "";
            count++;
        }

    }

    if(count < 5){
        std::cerr << "Copy/Paste Error" << "\n";
        std::cerr << "Error: Not enough data to compare. Five word minimum." << "\n";
        exit(EXIT_FAILURE);
    }

    mSize = mData->size();

}




//	Fills vector mData with each word from given file
int File::fillFile(const std::string file_name){
	//Input variables
	char rover;
	std::string word = "";


	//Input from file to mData for file
	FILE *file;
	file = fopen(file_name.c_str(), "r");
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

std::vector<std::string> File::getMarked(){
    std::vector<std::string> marked;
    for(std::pair<std::string, bool> pair : *mData){
        if(pair.second)
            marked.push_back(pair.first);
    }
    return marked;
}

int File::getPercentage(){
     return percentageMatch;
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

std::pair<std::string, bool>* File::getPair(const int pos){
    return &(mData->at(pos));
}

int File::getWordCount(){
	return mSize;
}

std::string File::getFileName(){
	return mFileName;
}

bool File::markFile(int pos){
    if(mData->at(pos).second == false)
        mMarked++;
	mData->at(pos).second = true;

    percentageMatch = (double(mMarked) / double(mSize)) * 100;
    //std::cerr << mMarked << " " << mSize << " " << percentageMatch << "\n";
    return true;
}

bool File::save(){
    FILE *f;

    const char* DIR = getenv("HOME");
    std::string make = std::string(DIR) + "/Desktop/history/";
    mkdir(make.c_str(), 0777);

    std::string name = make + mFileName;

    f = fopen(name.c_str(), "ab+");

    if(!f){
            return false;
    }else{
        f = fopen(name.c_str(), "w+");
        std::cout << "\n\nFileName: " << mFileName << "\n\n";
    }

    for(auto pair : *mData){
        for(char c : pair.first){
            std::cout << c;
            fputc(c, f);
        }
    }
    return true;
}

bool File::isMarked(int pos){
	return mData->at(pos).second;
}

File::~File(){
	delete mData;
}



#endif
