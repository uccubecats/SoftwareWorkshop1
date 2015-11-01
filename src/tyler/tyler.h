#include "../filereader/filereader.h"
#include <stdio.h>
#include <string>
#include <fstream>

// Variables
enum Subsystem {
	Communication,
	Flight,
	Integration,
	Payload,
	Power,
	Software
};

Subsystem* getEnums(std::string* strings);
void tylerFunction();
