#include <iostream>
#include "RoboticArm.h"

int main() {
    RoboticArm arm;

    std::cout << "Estado inicial: (" << arm.getX() << ", "
              << arm.getY() << ", " << arm.getZ() << ")"
              << "; sujetando objeto: "
              << (arm.isHoldingObject() ? "si" : "no") << std::endl;

    arm.move(1.0, 2.0, 3.0);
    arm.grab();
    std::cout << "Tras mover y coger: (" << arm.getX() << ", "
              << arm.getY() << ", " << arm.getZ() << ")"
              << "; sujetando objeto: "
              << (arm.isHoldingObject() ? "si" : "no") << std::endl;

    arm.move(4.0, 5.0, 6.0);
    std::cout << "Tras transportar: (" << arm.getX() << ", "
              << arm.getY() << ", " << arm.getZ() << ")"
              << "; sujetando objeto: "
              << (arm.isHoldingObject() ? "si" : "no") << std::endl;

    arm.release();
    std::cout << "Tras soltar: (" << arm.getX() << ", "
              << arm.getY() << ", " << arm.getZ() << ")"
              << "; sujetando objeto: "
              << (arm.isHoldingObject() ? "si" : "no") << std::endl;

    return 0;
}
