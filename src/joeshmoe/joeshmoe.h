#include "../filereader/filereader.h"
#include <stdio.h>
#include <string>
#include <fstream>

// Variables
enum Subsystem2 {
	Communication2,
	Flight2,
	Integration2,
	Payload2,
	Power2,
	Software2
};

Subsystem2* getEnums2(std::string* strings);
void tylerFunction2();
