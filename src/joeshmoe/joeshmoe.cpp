#include "joeshmoe.h"

/* Function used to convert an array of string into Enumerations. */
Subsystem2* getEnums2(std::string* strings) {
	
	/* Create a new array of Subsystem enumerations. */
	Subsystem2* subsystems = new Subsystem2[6];
	
	/* Setup the loop to read in each entry of the input array. */
	std::string line;
	int index = 0;
	while(index < 6) {
		
		/* Based on the array entry, pick the correct enumeration. */
		line = strings[index];
		if(line.compare("Communication") == 0) {
			subsystems[index] = Communication2;
		} 
		if(line.compare("Flight") == 0) {
			subsystems[index] = Flight2;
		}
		if(line.compare("Integration") == 0) {
			subsystems[index] = Integration2;
		}
		if(line.compare("Payload") == 0) {
			subsystems[index] = Payload2;
		}
		if(line.compare("Power") == 0) {
			subsystems[index] = Power2;
		}
		if(line.compare("Software") == 0) {
			subsystems[index] = Software2;
		}
		index++;
	}
	
	/* Return the new enumeration array. */
	return subsystems;
}

void tylerFunction2() {

	/* Get the sub-systems strings from the file. */
	std::string* subsystemsStrings;
	readInFile(subsystemsStrings);

	/* Convert the strings to enumerations. */
	Subsystem2* subsystems = getEnums2(subsystemsStrings);

	/* Print stuff based on sub-system. */
	for(int i = 0; i < 6; i++) {
		switch(subsystems[i]) {
			case Communication2:
				printf("Found Communication!\n");
				break;
			case Flight2:
				printf("Found Flight!\n");
				break;
			case Integration2:
				printf("Found Integration!\n");
				break;
			case Payload2:
				printf("Found Payload!\n");
				break;
			case Power2:
				printf("Found Power!\n");
				break;
			case Software2:
				printf("Found Software!\n");
				break;
		}
	}

}
