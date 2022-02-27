#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include "point.h"
#include "line.h"
#include "regression_line.h"

int main()
{
	std::vector<Point> data{Point(1, 1.5f), Point(2, 3.8f), Point(3, 6.7f), Point(4, 9.0f), Point(5, 11.2f), Point(6, 13.6f), Point(7, 16.0f)};

	Line line = GenerateRegressionLine(data);
	std::cout << "Equation: y=" << std::setprecision(8) << line.slope << "x+" << line.yIntercept << std::endl;
}