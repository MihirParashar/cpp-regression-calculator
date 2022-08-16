#pragma once
#include <string>
struct Line {
	double slope;
	double yIntercept;
	Line(double slope, double yIntercept);
	std::string to_string(int decimalRound);
	double round_to_decimal(double value, int precision);
};
