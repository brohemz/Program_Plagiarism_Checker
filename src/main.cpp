#include <stdlib.h>
#include <iostream>
#include "data.hpp"
#include "file.hpp"
#include "comparison.hpp"

using namespace std;

int main(int argc, char *argv[]) {

	Data dataObj;
	Comparison comp;

    for(int i = 1; i < argc; i++){
		dataObj.newFile(argv[i]);
	}

	// dataObj.printAll();

	vector<File*> files = dataObj.getAllFiles();

	comp.compare(files[0], files[1]);
	
	for(auto fi : files){
		fi->printMarked();
	}

	// File fi(argv[1]);
	// fi.print();

}
