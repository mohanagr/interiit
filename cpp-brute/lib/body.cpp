/*
 * body.cpp
 *
 */

#include "body.h"

#include "vector.h"

Body::Body(double mass, Vector position)
    : mMass(mass)
    , mPosition(position)
    , mVelocity(Vector())
{}

Body::Body(double mass, double x, double y, double z)
    : mMass(mass)
    , mPosition(Vector(x, y, z))
    , mVelocity(Vector())
{}

void Body::setVelocity(double vx, double vy, double vz)
{
    mVelocity = Vector(vx, vy, vz);
}

void Body::setPosition(double x, double y, double z)
{
    mPosition = Vector(x, y, z);
}

