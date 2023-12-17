#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "square.h"
#include "circle.h"
#include "triangle.h"

int block_int(int min, int max);
double block_double();

int main()
{
    int type, min, max, i;
    double sides[N]={1,2,3}, p, s;
    square one = NULL;
    circle two = NULL;
    triangle three = NULL;
    setlocale(LC_ALL, "Rus");
    //Полный цикл программы
    do {
        printf("\n1-квадрат\n2-круг\n3-треугольник\nВыберите фигуру:");
        min = 1; max = 3;
        one.setType(block_int(min, max));
        //Ввод и обработка
        switch (one.getType())
        {
        case 1:
            printf("Длина стороны квадрата:");
            one = square(block_double());
            one.workSquare();
            break;
        case 2:
            printf("Радиус круга:");
            two = circle(block_double());
            two.workCircle();
            break;
        case 3:
            printf("Длина сторон треугольника:");
            for (i = 0; i < 3; i++)
            {
                sides[i] = block_double();
            }
            three = triangle(sides);
            three.workTriangle();
            break;
        default:;
        }
        //Вывод результатов
        printf("Фигура: ");
        switch (one.getType())
        {
        case 1:
            printf("квадрат");
            printf("\nДиагональ: %f", one.getDiagonal());
            s = one.getArea();
            p = one.getPerimeter();
            break;
        case 2:
            printf("круг");
            printf("\nДиаметр: %f", two.getD());
            s = two.getArea();
            p = two.getPerimeter();
            break;
        case 3:
            switch (three.getView())
            {
            case 1:
                printf("равносторонний ");
                break;
            case 2:
                printf("равнобедренный ");
                break;
            case 3:
                printf("разносторонний ");
                break;
            default:;
            }
            printf("треугольник");
            s = three.getArea();
            p = three.getPerimeter();
            break;
        default:;
        }
        printf("\nПлощадь: %f", s);
        printf("\nПериметр: %f\n", p);
        printf("\nНажмите ESC для выхода или любую клавишу для продолжения\n");
    } while (_getch() != 27);
}
//Защита на целые числа
int block_int(int min, int max)
{
    int type, f = 1;
    do {
        if (f != 1)
        {
            printf("Такого варианта нет. Попробуйте ещё раз: ");
        }
        while (scanf("%d", &type) != 1)
        {
            while (getchar() != '\n');
            printf("Ошибка. Попробуйте ещё раз: ");
        }
        f = 0;
        while (getchar() != '\n');
    } while (type<min || type>max);
    printf("\n");
    return type;
}
//Защита на дробные числа
double block_double()
{
    int f = 1;
    double e;
    do {
        if (f != 1)
        {
            printf("Такого варианта нет. Попробуйте ещё раз: ");
        }
        while (scanf("%f", &e) != 1)
        {
            while (getchar() != '\n');
            printf("Ошибка. Попробуйте ещё раз: ");
        }
        f = 0;
        while (getchar() != '\n');
    } while (e <= 0);
    printf("\n");
    return e;
}