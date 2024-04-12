#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "Point.h"

using namespace std;

class FileIO {

	ifstream fin;
	ofstream fout;

public:

	void takeFile(string fileName);
	
	void fileHasResults(string fileName);

	void fileHasNoResults(string fileName);

	void writeResults(/*Takes vector all points i think*/);
	// probably take in vector of all points
	// implemented the way i think it will look
};

