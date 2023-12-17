#include "square.h"

//�����������
square::square(double a)
{
    this->a = a;
    diagonal = 0;
    area = 0;
    perimeter = 0;
}

//��������� ������
void square::workSquare()
{
    diagonal = sqrtf(2) * a;
    area = powf(a, 2);
    perimeter = a * 4;
}

//����� ���������
float square::getDiagonal()
{
    return diagonal;
}