#include "circle.h"

//Конструктор
circle::circle(double r)
{
    this->r = r;
    d = 0;
    area = 0;
    perimeter = 0;
}

//Обработка данных
void circle::workCircle()
{
    d = r * 2;
    area = 3.14 * pow(r, 2);
    perimeter = 3.14 * 2 * r;
}

//Вывод диаметра
float circle::getD()
{
    return d;
}