#include "joeshmoe.h"

/* Function used to convert an array of string into Enumerations. */
Subsystem* getEnums(std::string* strings) {
	
	/* Create a new array of Subsystem enumerations. */
	Subsystem* subsystems = new Subsystem[6];
	
	/* Setup the loop to read in each entry of the input array. */
	std::string line;
	int index = 0;
	while(index < 6) {
		
		/* Based on the array entry, pick the correct enumeration. */
		line = strings[index];
		if(line.compare("Communication") == 0) {
			subsystems[index] = Communication;
		} 
		if(line.compare("Flight") == 0) {
			subsystems[index] = Flight;
		}
		if(line.compare("Integration") == 0) {
			subsystems[index] = Integration;
		}
		if(line.compare("Payload") == 0) {
			subsystems[index] = Payload;
		}
		if(line.compare("Power") == 0) {
			subsystems[index] = Power;
		}
		if(line.compare("Software") == 0) {
			subsystems[index] = Software;
		}
		index++;
	}
	
	/* Return the new enumeration array. */
	return subsystems;
}

void tylerFunction() {

	/* Get the sub-systems strings from the file. */
	std::string* subsystemsStrings;
	readInFile(subsystemsStrings);

	/* Convert the strings to enumerations. */
	Subsystem* subsystems = getEnums(subsystemsStrings);

	/* Print stuff based on sub-system. */
	for(int i = 0; i < 6; i++) {
		switch(subsystems[i]) {
			case Communication:
				printf("Found Communication!\n");
				break;
			case Flight:
				printf("Found Flight!\n");
				break;
			case Integration:
				printf("Found Integration!\n");
				break;
			case Payload:
				printf("Found Payload!\n");
				break;
			case Power:
				printf("Found Power!\n");
				break;
			case Software:
				printf("Found Software!\n");
				break;
		}
	}

}
