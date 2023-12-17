#include "square.h"

//�����������
square::square(double a)
{
    this->a = a;
    diagonal = 0;
}

//��������� ������
void square::workSquare()
{
    diagonal = sqrtf(2) * a;
    area = powf(a, 2);
    perimeter = a * 4;
}

//����� ���������
double& square::getDiagonal()
{
    return diagonal;
}

//���������� ���������� ���������
double square::operator+(double s)
{
    return area + s;
}