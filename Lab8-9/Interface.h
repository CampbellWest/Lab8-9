#pragma once

#include <iostream>

#include "FileIO.h"
#include "NNClassifier.h"
#include "KNNClassifier.h"
#include "AnotherClassifier.h"

using namespace std;

class Interface {

public:

	void promptUser();

	void NNClassifierMenu(); 
};