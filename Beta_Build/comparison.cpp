#ifdef COMPARISON_H
#include <stdio.h>
#include "comparison.hpp"
#include "file.hpp"
#include "data.hpp"
#include <algorithm>



Comparison::Comparison(){
	mData = new std::vector<std::unordered_map<std::string, std::vector<int>>*>;
}

bool Comparison::compare(File* file1, File* file2){

	if(fillup(std::vector<File*> {file1, file2})){
		crossmatch(std::vector<File*> {file1, file2});

		return true;
	}

	return false;

}

bool Comparison::compare(Data* dataObj){
	std::vector<File*> files = dataObj->getAllFiles();
	if(fillup(files)){
		crossmatch(files);

		return true;
	}

	return false;
}

bool Comparison::fillup(std::vector<File*> files){

	if(files.empty())
		return false;

	for(File* file : files){
		auto file_map = new std::unordered_map<std::string, std::vector<int>>;
		for(int i = 0; i < file->getWordCount(); i++){
			std::string str = (*file)[i];
			str.erase(std::remove(str.begin(), str.end(), '\t'), str.end());
			str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
			str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());
			auto found = file_map->find(str);
			if(found == file_map->end()){
				file_map->insert(std::make_pair(str, std::vector<int>{i}));
			}else{
				(found->second).push_back(i);
			}
		}
		mData->push_back(file_map);
	}

	return true;

}

bool Comparison::crossmatch(std::vector<File*> files){

	//	Pointer at *(files[0]) references main/left comparison file

	File* file = files[0];

	//	For each file after main
	for(int i = 1; i < files.size(); i++){
		//	For each word in main file
		for(auto mapIter = mData->at(0)->cbegin(); mapIter != mData->at(0)->cend(); mapIter++){
			auto found = mData->at(i)->find(mapIter->first);
			if(found != mData->at(i)->end()){
				for(int pos : mapIter->second){
					for(int compPos : found->second){

						int count = 1;
						while(compPos + count < files[i]->getWordCount() && pos + count < file->getWordCount() && !(files[i]->isMarked(compPos))){

							if((*files[i])[compPos+count]!= (*file)[pos+count]){
								if(count > 4){
									for(int recount = 0; recount < count; recount++){
										file->markFile(pos + recount);
										files[i]->markFile(compPos + recount);
									}
								}
								break;
							}

							if(count == 4){
								for(int recount = 1; recount <= count; recount++){
									file->markFile(pos + recount);
									files[i]->markFile(compPos + recount);
								}
							}

							if(count > 4){
								file->markFile(pos + count);
								files[i]->markFile(compPos + count);

							}
							if(pos + count == file->getWordCount() - 1 || compPos + count == files[i]->getWordCount() - 1){
								if(count >= 4){
									file->markFile(pos);
									files[i]->markFile(compPos);
								}
							}

							count++;

						}

					}


				}

			}


		}
	}


}

Comparison::~Comparison(){
	for(auto iter : *mData){
		delete iter;
	}
	delete mData;
}




#endif
