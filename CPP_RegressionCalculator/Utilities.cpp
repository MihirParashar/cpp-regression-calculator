#include "Math.h"
#include "Utilities.h"


double Utilities::RoundToDecimal(double value, int precision) {
	double pow_10 = pow(10.0f, precision);
	return round(value * pow_10) / pow_10;
}