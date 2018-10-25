#include <stdlib.h>
#include <iostream>
#include "data.hpp"
#include "file.hpp"

using namespace std;

int main(int argc, char *argv[]) {

	Data dataObj;

    for(int i = 1; i < argc; i++){
		dataObj.newFile(argv[i]);
	}

	dataObj.printAll();
	// File fi(argv[1]);
	// fi.print();

}
