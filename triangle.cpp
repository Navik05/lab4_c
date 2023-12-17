#include "triangle.h"

//Конструктор
triangle::triangle(double sides[])
{
	for (int i = 0; i < N; i++)
		this->sides[i] = sides[i];
	view = 0;
	area = 0;
	perimeter = 0;
}

//Обработка данных
void triangle::workTriangle()
{
    double p;
    perimeter = sides[0] + sides[1] + sides[2];
    p = perimeter / 2;
    area = sqrtf(p * (p - sides[0]) * (p - sides[1]) * (p - sides[2]));
    if (sides[0] == sides[1] && sides[1] == sides[2])
        view = 1;
    else if (sides[0] == sides[1] || sides[1] == sides[2] || sides[0] == sides[2])
        view = 2;
    else view = 3;
}

//Вывод вида треугольника
int triangle::getView()
{
    return view;
}