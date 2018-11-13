#ifndef DATA_H
#define DATA_H



#include <string>
#include <vector>

#include "file.hpp"

class Data{
	private:
	std::vector<File*> mFiles;
	public:
	Data();
	bool newFile(const std::string file_name);
    bool newFile(std::string text, std::string file_name);
    bool saveFiles();
	void printAll();
    bool getHistory();
	std::vector<File*> getAllFiles();
	~Data();
};

#include "data.cpp"
#endif
