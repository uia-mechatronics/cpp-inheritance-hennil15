#ifndef POSITION_H
#define POSITION_H


class Position
{
public:
    Position(double x, double y);
    ~Position();

    // Legg til get- og set-funksjoner her.
    double getXPosition();
    double getYPosition();
    void setXPosition();
    void setYPosition();

private:

    double x_;
    double y_;

};

#endif // POSITION_H
