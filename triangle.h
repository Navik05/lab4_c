#pragma once
#include "figure.h"

class triangle : public figure
{
    double sides[N];
    int view;
public:
    triangle(double sides[]);
    void workTriangle();
    int getView();
};

