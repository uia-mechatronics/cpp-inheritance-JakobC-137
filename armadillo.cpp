#include "armadillo.h"
#include <iostream>

Armadillo::Armadillo()
{
    std::cout << "Armadillo is constructed" << std::endl;
}

void Armadillo::move()
{
    std::cout << "Armadillos are quad-pedal" << std::endl;
}

void Armadillo::roll()
{
    std::cout << "Barrel roll!!!" << std::endl << std::endl;
}

Position Armadillo::getPosition()
{
    Position position(0,0);
    position.setXPosition();
    position.setYPosition();

    return position;
}
