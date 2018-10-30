#ifdef COMPARISON_H
#include <stdio.h>
#include "comparison.hpp"
#include "file.hpp"
#include "data.hpp"



Comparison::Comparison(){
	mData = new std::vector<std::unordered_map<std::string, std::vector<int>>*>;
}

bool Comparison::compare(File* file1, File* file2){

	if(fillup(std::vector<File*> {file1, file2})){
		crossmatch(std::vector<File*> {file1, file2});
		// for(auto iter : *mData){
		// 	for(auto it = iter->begin(); it != iter->end(); it++){
		// 		for(int i = 0; i < (it->second).size(); i++){
		// 			std::cout << it->first << " : " << (it->second)[i] << "\n";
		// 		}
		// 	}
		// }


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
			auto found = file_map->find((*file)[i]);
			if(found == file_map->end()){
				file_map->insert(std::make_pair((*file)[i], std::vector<int>{i}));
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
								if(count >= 4){
									file->markFile(pos);
									files[i]->markFile(compPos);
								}
								break;
							}

							if(count == 4){
								for(int recount = 1; recount <= 4; recount++){
									file->markFile(pos + recount);
									files[i]->markFile(compPos + recount);
								}
							}

							if(count > 4){
								file->markFile(pos + count);
								files[i]->markFile(compPos + count);

							}
							count++;

						}

					}


				}

			}


		}
	}


}




#endif
