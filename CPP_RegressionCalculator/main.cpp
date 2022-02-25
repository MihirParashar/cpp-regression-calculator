#include <iostream>
#include <math.h>
#include "point.h"

using namespace std;
int main()
{
	const int n = 7;
	Point points[n] = { Point(1, 1.5f), Point(2, 3.8f), Point(3, 6.7f), Point(4, 9.0f), Point(5, 11.2f), Point(6, 13.6f), Point(7, 16.0f) };

	float sumX = 0, sumY = 0, sumXY = 0, sumXSquared = 0;

	for (int i = 0; i < n; i++)
	{
		float x = points[i].x;
		float y = points[i].y;
		sumX += x;
		sumY += y;
		sumXY += x * y;
		sumXSquared += pow(x, 2);
	}

	float m = (n * sumXY - sumX * sumY) / (n * sumXSquared - pow(sumX, 2));
	float b = (sumY - m * sumX) / n;
	cout << "Equation: y=" << m << "x+" << b << endl;
}