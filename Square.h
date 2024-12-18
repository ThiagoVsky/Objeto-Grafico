#pragma once
#include "Rectangle.h"

class Square :
    public Rectangle
{
    int base;
public:
    Square(int x, int y, int base, COR cor);

    void resize(int base);
    int getBase();
    string toString();
};

