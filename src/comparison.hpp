#ifndef COMPARISON_H
#define COMPARISON_H



#include <string>
#include <vector>
#include <unordered_map>

class File;
class Data;

class Comparison{
	private:
	std::vector<std::unordered_map<std::string, std::vector<int>>*> *mData;
	bool fillup(std::vector<File*> files);
	bool cleanup();
	bool crossmatch(std::vector<File*> files);

	public:
	Comparison();

	//	Comparison for History
	bool compare(Data* dataObj);
	//	Comparison between two files
	bool compare(File* file1, File* file2);
};

#include "comparison.cpp"
#endif
