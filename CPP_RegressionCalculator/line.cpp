#include "Line.h"
#include "Utilities.h"
#include <iomanip>
#include <string>
#include <iostream>
#include <sstream>;

Line::Line(double slope, double yIntercept) {
	this->slope = slope;
	this->yIntercept = yIntercept;
}

std::string Line::to_string(int precision) {
	std::ostringstream slopeStringStream;
	slopeStringStream << Utilities::RoundToDecimal(slope, precision);
	std::string slopeString = slopeStringStream.str();

	std::ostringstream yInterceptStringStream;
	yInterceptStringStream << Utilities::RoundToDecimal(yIntercept, precision);
	std::string yInterceptString = yInterceptStringStream.str();

	if (yIntercept >= 0) {
		yInterceptString.insert(0, "+");
	}

	return "y=" + slopeString + "x" + yInterceptString;
}