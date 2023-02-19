#include "LinearRegression.h"
#include <iostream>

Line GenerateRegressionLine(std::vector<Point> data) {

	double sumX = 0, sumY = 0, sumXY = 0, sumXSquared = 0;
	size_t length = data.size();
	for (int i = 0; i < length; i++)
	{
		double x = data.at(i).x;
		double y = data.at(i).y;
		sumX += x;
		sumY += y;
		sumXY += x * y;
		sumXSquared += pow(x, 2);
	}

	double slope = (length * sumXY - sumX * sumY) / (length * sumXSquared - pow(sumX, 2));
	double yIntercept = (sumY - slope * sumX) / length;

	std::cout << (length * sumXSquared - pow(sumX, 2)) << std::endl;
	return Line(slope, yIntercept);
}
