#include "square.h"

//Конструткор
square::square(double a)
{
    this->a = a;
    diagonal = 0;
    area = 0;
    perimeter = 0;
}

//Обработка данных
void square::workSquare()
{
    diagonal = sqrtf(2) * a;
    area = powf(a, 2);
    perimeter = a * 4;
}

//Вывод диагонали
float square::getDiagonal()
{
    return diagonal;
}