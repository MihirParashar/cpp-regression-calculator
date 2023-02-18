#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include "point.h"
#include "line.h"
#include "regression_line.h"

int main()
{
	const int DECIMAL_PRECISION = 3;

	std::vector<Point> data;
	int sample_size = 0;
	
	std::cout << "Enter the number of points: ";
	std::cin >> sample_size;

	for (int i = 1; i <= sample_size; i++) {
		double x = 0;
		double y = 0;
		std::cout << "Point " << i << " x: ";
		std::cin >> x;
		std::cout << "Point " << i << " y: ";
		std::cin >> y;
		
		data.push_back(Point(x, y));
	}


	Line line = GenerateRegressionLine(data);
	std::cout << std::setprecision(DECIMAL_PRECISION) << "Equation: " + line.to_string(DECIMAL_PRECISION);
}