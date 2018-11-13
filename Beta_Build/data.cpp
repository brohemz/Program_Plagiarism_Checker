#ifdef DATA_H
#include <stdio.h>
#include "data.hpp"
#include "dirent.h"


//	Constructor
Data::Data(){

}

bool Data::newFile(const std::string file_name){
	mFiles.push_back(new File(file_name));
}

bool Data::newFile(const std::string text, const std::string file_name){
    mFiles.push_back(new File(text, file_name));
}


void Data::printAll(){
	for(File* fi : mFiles){
		fi->print();
		std::cout << "\n";
	}

}

std::vector<File*> Data::getAllFiles(){
	return mFiles;
}


bool Data::saveFiles(){

    for(int i = 0; i < mFiles.size(); i++){
        mFiles[i]->save();
    }
    return true;
}

bool Data::getHistory(){
    DIR* dir;
    struct dirent *entry;
    std::string dir_name = std::string(getenv("HOME")) + "/Desktop/history/";
    if((dir = opendir(dir_name.c_str())) != NULL){
        while((entry = readdir(dir)) != NULL){
            if(!mFiles.empty()){
                if(entry->d_name == mFiles[0]->getFileName())
                    return false;
            }
            std::string currentFile = entry->d_name;
            if(currentFile != ".." && currentFile != "." && currentFile != ".DS_Store"){
                std::cout << "File: " << entry->d_name << "\n";
                if(newFile(dir_name + entry->d_name))
                    return true;
            }

        }

    }else{
        perror("");
        exit(EXIT_FAILURE);
    }

    return false;
}



Data::~Data(){
	for(int i = 0; i < mFiles.size(); i++)
		delete mFiles[i];
}


#endif
