#include "FileIO.h"
#include "Point.h"

void FileIO::takeFile(string fileName) {

	fin.open(fileName);

	string temp;
	getline(fin, temp);
	int i = 0;
	istringstream issTempLine(temp);
	while (getline(issTempLine, temp, ',')) {
		i++;
	}
	
	fin.close();

	if (i == 3)
		fileHasNoResults(fileName);
	else if (i == 4)
		fileHasResults(fileName);
	else {
		cout << "Invalid Input Data" << endl;
		return;
	}
}

void FileIO::fileHasNoResults(string fileName) {

	fin.open(fileName);

	if (fin.is_open()) {

		while (!fin.eof()) {

			string x, y, z, result, line;
			getline(fin, line);

			if (line.empty())
				break;

			istringstream issLine(line);

			getline(issLine, x, ',');
			getline(issLine, y, ',');
			getline(issLine, z);

			cout << stof(x) << " " << stof(y)
				<< " " << stof(z) << " " << endl;

			//Point p(stof(x), stof(y), stof(z));
		}

		fin.close();
	}
	else {
		cout << "Couldn't Open" << endl;
	}
}

void FileIO::fileHasResults(string fileName) {

	fin.open(fileName);

	if (fin.is_open()) {

		while (!fin.eof()) {

			string x, y, z, result, line;
			getline(fin, line);

			if (line.empty())
				break;

			istringstream issLine(line);

			getline(issLine, x, ',');
			getline(issLine, y, ',');
			getline(issLine, z, ',');
			getline(issLine, result);

			cout << stof(x) << " " << stof(y) << " " 
				<< stof(z) << " " << stoi(result) << endl;

			//Point p(stof(x), stof(y), stof(z), stoi(result));
		}

		fin.close();
	}
	else {
		cout << "Couldn't Open" << endl;
	}
}

void FileIO::writeResults(/*RESULTS*/) {
	fout.open("result.txt");

	for (Point& p : /*Point Vector*/) {
		fout << p.getX() << ", " << p.getY() << ", ";
		fout << p.getZ() << ", " << p.getResult() << endl;
	}

	fout.close();
}
