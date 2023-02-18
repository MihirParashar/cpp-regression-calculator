#include "line.h"
#include <iomanip>
#include <string>
#include <iostream>
#include <sstream>

Line::Line(double slope, double yIntercept) {
	this->slope = slope;
	this->yIntercept = yIntercept;
}

std::string Line::to_string(int precision) {
	std::ostringstream slopeStringStream;
	slopeStringStream << round_to_decimal(slope, precision);
	std::string slopeString = slopeStringStream.str();

	std::ostringstream yInterceptStringStream;
	yInterceptStringStream << round_to_decimal(yIntercept, precision);
	std::string yInterceptString = yInterceptStringStream.str();

	if (yIntercept >= 0) {
		yInterceptString.insert(0, "+");
	}

	return "y=" + slopeString + "x" + yInterceptString;
;}

double Line::round_to_decimal(double value, int precision) {
	double pow_10 = pow(10.0f, precision);
	return round(value * pow_10) / pow_10;
}