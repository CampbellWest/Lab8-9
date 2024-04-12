#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "Interface.h"
#include "AnotherClassifier.h"
#include "KNNClassifier.h"
#include "NNClassifier.h"
#include "Point.h"
#include "FileIO.h"

using namespace std;

int main() {

	Interface interface;

	interface.promptUser();
	
	return 0;
}

/*
Right now nothing happens with the data i just wanted to figure out the IO
you have the option of inputting points (nothing happens they just print)
or typing out one of the files (those just print too)

there are calls in each file IO that call a point constructor but nothing happens
im assuming a points vector will have to be made when opening the file and points are 
added as theyre created, but idk 

the file reads can return that vector if that how we want to do it

Also the only inheritence so far is between the classifiers and im sure theres spots where
some can be added to shrink the code. It does look very OOP at the moment.




*/