#include "Point.h"

Point::Point() {
	x = 0;
	y = 0;
	z = 0;
	result = 0;
}

Point::Point(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->result = 0;
}

Point::Point(float x, float y, float z, int result) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->result = result;
}

void Point::setX(float x) {
	this->x = x;
}
void Point::setY(float y) {
	this->y = y;
}
void Point::setZ(float z) {
	this->z = z;
}

float Point::getX() {
	return this->x;
}
float Point::getY() {
	return this->y;
}
float Point::getZ() {
	return this->z;
}
int Point::getResult() {
	return this->result;
}