#include "figure.h"

//����� �������
double figure::getArea()
{
    return area;
}

//����� ���������
double figure::getPerimeter()
{
    return perimeter;
}

//���� ���� ������
void figure::setType(int e)
{
    type = e;
}

//����� ���� ������
int figure::getType()
{
    return type;
}

//����������
figure::~figure()
{

}

int figure::type = 0;