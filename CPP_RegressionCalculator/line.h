#pragma once
#include <string>
struct Line {
	double slope;
	double yIntercept;
	Line(double slope, double yIntercept);
	std::string to_string(int decimalPrecision);
};
