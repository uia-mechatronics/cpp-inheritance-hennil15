#include "position.h"
#include <iostream>



Position::Position(double x, double y)
    : x_(x)
    , y_(y)
{
    std::cout << "Position is constructed" << std::endl;
    std::cout << "x: "<< x_ << std::endl;
    std::cout << "y: " << y_ << std::endl;
}


Position::~Position()
{

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
    std::cout << "What is X position?" << std::endl;
    std::cin>> a;
    x_ = a;
}

void Position::setYPosition()
{
    double a;
    std::cout << "What is Y position?" << std::endl;
    std::cin>> a;
    y_ = a;

}


