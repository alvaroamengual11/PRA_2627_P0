#include "RoboticArm.h"

RoboticArm::RoboticArm(double initialX, double initialY, double initialZ)
    : x(initialX), y(initialY), z(initialZ), holdingObject(false) {
}

double RoboticArm::getX() const {
    return x;
}

double RoboticArm::getY() const {
    return y;
}

double RoboticArm::getZ() const {
    return z;
}

bool RoboticArm::isHoldingObject() const {
    return holdingObject;
}

void RoboticArm::grab() {
    holdingObject = true;
}

void RoboticArm::release() {
    holdingObject = false;
}

void RoboticArm::move(double newX, double newY, double newZ) {
    // Las coordenadas indican la nueva posicion absoluta del brazo.
    x = newX;
    y = newY;
    z = newZ;
}
