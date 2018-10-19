#ifndef FILE_H
#define FILE_H

#import <vector>

class File{
	private:
	int percentageMatch;
	std::vector<int> *mData;
	//Add properties vector later

	public:

	File(const std::string file_name);

	std::vector<int> contains(const std::string str);

	int operator[](const int pos);

	bool operator==(File fi) const;

	~File();

};

#include "file.cpp"
#endif
