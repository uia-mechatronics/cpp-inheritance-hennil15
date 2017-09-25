#include "bever.h"
#include <iostream>


Bever::Bever()
{
    std::cout << "Bever constructed" << std::endl;
}

void Bever::move(double b)
{
    std::cout << "Beveren beveger på seg" << std::endl;

    if (b < 10 )
    {
    swim();
    }
    else
    {
    run();
    }

}

void Bever::swim()
{
    std::cout << "Beveren svommer" << std::endl;
}

void Bever::run()
{
    std::cout << "Beveren loper" << std::endl;
}

Position Bever::getPosition()
{
    std::cout << "test" << std::endl;

    Position position(0,0);

    position.setXPosition();
    position.setYPosition();

    double xPosition = position.getXPosition();
    double yPosition = position.getYPosition();

    std::cout << "Position is: " << std::endl;
    std::cout << xPosition << std::endl;
    std::cout << yPosition << std::endl;

    return position;
}

