#ifndef FILE_H
#define FILE_H

#include <vector>

#include <string>
#include <stdlib.h>
#include <iostream>

class File{
	private:
	int percentageMatch;
	std::string mFileName;
	std::vector<std::pair<std::string, bool>> *mData;
	int mSize;
	//Add properties vector later
	int fillFile(const std::string file_name);

	public:

	File(const std::string file_name);

    File(const std::string text, const std::string file_name);

	std::vector<int> contains(const std::string str);

	std::string operator[](const int pos);

	bool operator==(File* fi) const;

	int getWordCount();

	std::string getFileName();

	bool markFile(int pos);

	bool isMarked(int pos);

	void printMarked();

    std::vector<std::string> getMarked();

    std::pair<std::string, bool>* getPair(const int pos);

    bool save();


	void print();

	~File();

};

#include "file.cpp"
#endif
