#include <iostream>
#include "RoboticArm.h"

using namespace std;

int main() {
    RoboticArm brazo;

    brazo.move(1, 2, 3);
    brazo.grab();

    cout << "Posicion: " << brazo.getX() << ", "
         << brazo.getY() << ", " << brazo.getZ() << endl;

    if (brazo.isHoldingObject()) {
        cout << "El brazo tiene un objeto." << endl;
    }

    brazo.release();

    if (!brazo.isHoldingObject()) {
        cout << "El brazo ha soltado el objeto." << endl;
    }

    return 0;
}
