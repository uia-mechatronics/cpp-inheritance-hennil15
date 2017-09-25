#ifndef BEVER_H
#define BEVER_H
#include "ianimal.h"
#include "ipositionprovider.h"



class Bever : public IAnimal, public IPositionProvider
{
public:
    Bever(); //constructor
    void move(double b);
    void run();
    void swim();
    Position getPosition();

};

#endif // BEVER_H
