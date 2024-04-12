#pragma once

enum Orientation {
	FACE_UP = 1,
	FACE_DOWN = 2,
	PORTRAIT = 3,
	PORTRAIT_UPSIDE_DOWN = 4,
	LANDSCAPE_LEFT = 5,
	LANDSCAPE_RIGHT = 6
};

class Point {

	float x, y, z;
	int result;

public: 

	Point();
	Point(float x, float y, float z);
	Point(float x, float y, float z, int result);

	void setX(float x);
	void setY(float y);
	void setZ(float z);

	float getX();
	float getY();
	float getZ();
	int getResult();
};

