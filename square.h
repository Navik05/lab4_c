#pragma once
#include "figure.h"

class square : public figure
{
    double a;
    double diagonal;
public:
    square(double a);
    void workSquare();
    float getDiagonal();
};
