#ifndef ARMADILLO_H
#define ARMADILLO_H
#include "ianimal.h"
#include "ipositionprovider.h"


class Armadillo: public IAnimal, public IPositionProvider
{
public:
    Armadillo();
    void move();
    void roll();
    Position getPosition();
};

#endif // ARMADILLO_H
