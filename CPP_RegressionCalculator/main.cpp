#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include "Point.h"
#include "Line.h"
#include "LinearRegression.h"

int main()
{
	const int DECIMAL_PRECISION = 3;

	std::vector<Point> data;
	int sample_size = 0;
	
	do {
		std::cout << "Enter the number of points: ";
		std::cin >> sample_size;

		if (sample_size < 2) {
			std::cout << "Must input at least two points" << std::endl;
		}
	} while (sample_size < 2);


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
	std::cout << "Equation: " + line.to_string(DECIMAL_PRECISION);
}