#include <iostream>
#include "bever.h"
#include "position.h"

int main()
{

   //Constructing position object
  // Position position(0,0);

   //Constructing bever animal
   Bever bever;

   Position position = bever.getPosition();

   //calling move function within animal
   bever.move(position.getYPosition());


   //med Ianimal&
   //IAnimal& animal = bever;
   //animal.move();


    return 0;
}
