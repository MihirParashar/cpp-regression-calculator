#include "point.h"
#include "regression_line.h"
#include "line.h"
#include <math.h>

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

	return Line(slope, yIntercept);
}
