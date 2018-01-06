/*
 * vector.h
 *
 */

#pragma once

class Vector
{
    Vector();

    Vector(double i, double j, double k);

    ~Vector();

    friend Vector operator+(Vector lhs, const Vector& rhs)
    {
    	lhs.mI += rhs.mI;
    	lhs.mJ += rhs.mJ;
    	lhs.mK += rhs.mK;

    	return lhs;
    }

    Vector unitVector();

    double magnitude();


private:
    double mI;
    double mJ;
    double mK;
};
