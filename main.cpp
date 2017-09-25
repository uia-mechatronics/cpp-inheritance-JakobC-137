#include <iostream>
#include "armadillo.h"
//#include "position.h"


int main()
{
    Armadillo a;

    a.move();
    a.roll();
//    IAnimal& b = a;
//    b.move();

    std::cout << std::endl;
    std::cout << "Hey look: our code works" << std::endl << std::endl;


//    Position c(0, 0);

//    std::cout << "x = " << c.getXPosition() << std::endl;
//    std::cout << "y = " << c.getYPosition() << std::endl;

//    c.setXPosition();
//    c.setYPosition();

//    std::cout << "x = " << c.getXPosition() << std::endl;
//    std::cout << "y = " << c.getYPosition() << std::endl;


    Position b = a.getPosition();

    std::cout << "Armadilloen befinner seg i posisjon (" << b.getXPosition() << ", " << b.getYPosition() << ")" << std::endl;

    return 0;
}
