//Lab_04_6.cpp
//Білоус Катерина
//Лабораторна робота № 4.6
//Вкладені цикли
//Варіант 2

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double P, S;
    int i, k;

    P = 1;
    i = 1;
    while (i <= 15)
    {
        S = 0;
        k = 1;
        while (k <= i)
        {
            S = S + 1.0 / k;
            k++;
        }
        P = P * (sin(1.*i) * sin(1.*i) + cos(S) * cos(S)) / (i * i);
        i++;
    }
    cout << P << endl;

    P = 1;
    i = 1;
    do
    {
        S = 0;
        k = 1;
        do
        {
            S = S + 1.0 / k;
            k++;
        } while (k <= i);
        P = P * (sin(1.*i) * sin(1.*i) + cos(S) * cos(S)) / (i * i);
        i++;
    } while (i <= 15);
    cout << P << endl;

    P = 1;
    for (i = 1; i <= 15; i++)
    {
        S = 0;
        for (k = 1; k <= i; k++)
            S = S + 1.0 / k;
        P = P * (sin(1.*i) * sin(1.*i) + cos(S) * cos(S)) / (i * i);
    }
    cout << P << endl;

    P = 1;
    for (i = 15; i >= 1; i--)
    {
        S = 0;
        for (k = i; k >= 1; k--)
            S = S + 1.0 / k;
        P = P * (sin(1.*i) * sin(1.*i) + cos(S) * cos(S)) / (i * i);
    }
    cout << P << endl;
    return 0;
}