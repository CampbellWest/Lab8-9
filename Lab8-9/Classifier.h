#pragma once
class Classifier {
public:
	virtual void classify() = 0;
};

void callClassifier(Classifier& c);