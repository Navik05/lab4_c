#include "square.h"

//Конструткор
square::square(double a)
{
    this->a = a;
    diagonal = 0;
}

//Обработка данных
void square::workSquare()
{
    diagonal = sqrtf(2) * a;
    area = powf(a, 2);
    perimeter = a * 4;
}

//Вывод диагонали
double& square::getDiagonal()
{
    return diagonal;
}

//Префиксная перегрузка оператора
double square::operator+(double s)
{
    return area + s;
}