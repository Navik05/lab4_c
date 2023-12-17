#include "figure.h"

//Вывод площади
double figure::getArea()
{
    return area;
}

//Вывод периметра
double figure::getPerimeter()
{
    return perimeter;
}

//Ввод типа фигуры
void figure::setType(int e)
{
    type = e;
}

//Вывод типа фигуры
int figure::getType()
{
    return type;
}

//Деструктор
figure::~figure()
{

}

int figure::type = 0;