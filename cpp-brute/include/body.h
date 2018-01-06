/*
 * body.h
 *
 */

#pragma once

class Vector;

class Body
{
    Body(double mass, Vector position);

    Body(double mass, double x, double y, double z);

    ~Body();

    Vector velocity() { return mVelocity; }

    void setVelocity(double vx, double vy, double vz);
    void setVelocity(Vector velocity) { mVelocity = velocity; }

    Vector position() { return mPosition; }

    void setPosition(double x, double y, double x);
    void setPosition(Vector position) { mPosition = position; }

    Double mass() { return mMass; }

    void setMass(double mass) { mMass = mass; }

private:
    Vector mVelocity;
    Vector mPosition;

    double mMass;
};
