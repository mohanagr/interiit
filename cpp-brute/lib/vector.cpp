/*
 * vector.cpp
 *
 */

#include "vector.h"

#include <math.h>

Vector::Vector()
    : mI(0.0)
    , mJ(0.0)
    , mK(0.0)
{}

Vector::Vector(double i, double j, double k)
    : mI(i)
    , mJ(j)
    , mK(k)
{}

Vector Vector::unitVector()
{
	double den = magnitude();

	return Vector(mI / den, mJ / den, mK / den);
}

double Vector::magnitude()
{
	double value = std::sqrt(mI*mI + mJ*mJ + mK*mK);

	return value;
}
