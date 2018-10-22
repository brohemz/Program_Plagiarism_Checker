#ifndef FILE_H
#define FILE_H

#import <vector>

#include <string>
#include <stdlib.h>

class File{
	private:
	int percentageMatch;
	std::vector<std::pair<std::string, bool>> *mData;
	//Add properties vector later
	bool fill(const std::string file_name);

	public:

	File(const std::string file_name);

	std::vector<int> contains(const std::string str);

	int operator[](const int pos);

	bool operator==(File fi) const;

	~File();

};

#include "file.cpp"
#endif
