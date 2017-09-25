#include "position.h"
#include <iostream>



Position::Position(double x, double y)
    : x_(x)
    , y_(y)
{
//    std::cout << "Position is constructed" << std::endl;
}

double Position::getXPosition()
{
    return x_;
}

double Position::getYPosition()
{
    return y_;
}

void Position::setXPosition()
{
    double a;
    std::cout << "Set x = ";
    std::cin >> a;
    x_ = a;
}

void Position::setYPosition()
{
    double a;
    std::cout << "Set y = ";
    std::cin >> a;
    y_ = a;
}



void Position::test()
{
    std::cout << "Test" << std::endl;
}

Position::~Position()
{

}
