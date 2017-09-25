#ifndef IANIMAL_H
#define IANIMAL_H


class IAnimal
{
public:

    virtual ~IAnimal() {}

    virtual void move(double b) = 0;

};

#endif // IANIMAL_H
