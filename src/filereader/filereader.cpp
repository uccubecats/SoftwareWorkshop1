#include "filereader.h"

void readInFile(std::string* &subsystems) {

	/* Read in the file. */
	std::ifstream subFile("../files/subsystems.fln");

	/* Verify that the file is open. */
	if(subFile.is_open()) {
		
		/* Create an array to hold the file's contents (for simplicity we know there are 6 lines). */
		subsystems = new std::string[6];
		
		/* Read in each line from the file. */
		std::string line;
		int index = 0;
		while(getline(subFile, line)) {
			
			/* Store each line in the array. */
			subsystems[index] = line;
			index++;
		}

	/* Set the pointer to NULL if we couldn't open the file. */
	} else {
		subsystems = NULL;
	}
}
