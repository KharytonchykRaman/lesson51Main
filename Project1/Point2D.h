#pragma once
#include <string>
#include <iostream>

class Point2D {
public:
	double x;
	double y;

	Point2D(double newX = 0, double newY = 0) {
		x = newX;
		y = newY;
	}

	void changeCoord(double newX, double newY) {
		x = newX;
		y = newY;
	}

	int getQuarter() {
		int quarter = 0;
		if (x > 0 && y > 0)
		{
			quarter = 1;
		}
		else if (x < 0 && y > 0) {
			quarter = 2;
		}
		else if (x < 0 && y < 0) {
			quarter = 3;
		}
		else if (x > 0 && y < 0) {
			quarter = 4;
		}
		return quarter;
	}
};