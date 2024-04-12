#include "Interface.h"
#include "FileIO.h"

void Interface::promptUser() {
	int option;
	cout << "Choose Classifier\n"
		"1. NNClassifier (Nearest Neighbour)\n"
		"2. KNNClassifier\n"
		"3. AnotherClassifier\n\n";

	cin >> option;
	switch (option) {
	case 1:
		NNClassifierMenu();
		break;
	case 2: {
		KNNClassifier c;
		callClassifier(c);
		break;
	}
	case 3: {
		AnotherClassifier a;
		callClassifier(a);
		break;
	}
	default:
		cout << "Invalid Choice" << endl;
		break;
	}
}

void Interface::NNClassifierMenu() {
	int option;
	cout << "1. Input Data" << endl << "2. File Name ('trainingData.txt'," <<
		"'testingData.txt', or 'unknownData.txt')" << endl << endl;
	cin >> option;

	switch (option) {
		case 1: {
			float x, y, z;
			cin >> x >> y >> z; // probably need some validation here
			Point p(x, y, z);
			cout << x << " " << y << " " << z << " " << endl;
			// run this point through the NNClassifier 
			break;
		}
		case 2: {
			string fileName;
			cout << "Enter File Name: ";
			cin >> fileName; // more validation 
			FileIO file;
			file.takeFile(fileName);
			break;
		}
		default:
			cout << "Invalid Choice" << endl;
			break;

	}
}