#include <stdlib.h>
#include <iostream>
#include "data.hpp"
#include "file.hpp"
#include "comparison.hpp"

using namespace std;

int main(int argc, char *argv[]) {

	Data dataObj;
	Comparison comp;

	if(argc <= 2){
		std::cerr << "Only one file entered. Aborting.\n";
		return -1;
	}

    for(int i = 1; i < argc; i++){
		dataObj.newFile(argv[i]);
	}

	// dataObj.printAll();

	vector<File*> files = dataObj.getAllFiles();

	if(argc == 3)
		comp.compare(files[0], files[1]);
	else
		comp.compare(&dataObj);

	std::cout << "_____________File Analysis_____________\n\n";

	for(auto fi : files){
		std::cout << "\nFile: " << fi->getFileName() << "\n\n";
		std::cout << "_____________marked portions considered for plagiarism_____________\n\n";
		fi->printMarked();
	}

	std::cout << "\n ______________End File Analysis______________\n\n";

	// File fi(argv[1]);
	// fi.print();

}
