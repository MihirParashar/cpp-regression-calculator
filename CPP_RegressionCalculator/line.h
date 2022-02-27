#pragma once
struct Line {
	double slope;
	double yIntercept;
	Line(double slope, double yIntercept) {
		this->slope = slope;
		this->yIntercept = yIntercept;
	};
};
