#include "line.h"
#include <iomanip>
#include <string>
#include <iostream>

Line::Line(double slope, double yIntercept) {
	this->slope = slope;
	this->yIntercept = yIntercept;
}

std::string Line::to_string(int roundingPrecision) {
	double slope_ = round_to_decimal(slope, roundingPrecision);
	double yIntercept_ = round_to_decimal(yIntercept, roundingPrecision);
	std::string slope_string = std::to_string(round_to_decimal(slope, roundingPrecision));
	std::string yIntercept_string = std::to_string(round_to_decimal(yIntercept, roundingPrecision));

	if (yIntercept >= 0) {
		yIntercept_string.insert(0, "+");
	}

	return "y=" + slope_string + "x" + yIntercept_string;
}

double Line::round_to_decimal(double value, int precision) {
	double pow_10 = pow(10.0f, precision);
	return round(value * pow_10) / pow_10;;
}