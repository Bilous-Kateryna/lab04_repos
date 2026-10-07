//Lab_04_4.cpp
//Білоус Катерина
//Лабораторна робота № 4.4
//Табуляція функції, заданої графіком
//Варіант 2

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double R, x, xp, xk, dx, y;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
         << setw(7) << "y" << "    |" << endl;
    cout << "----------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x < -8)
            y = -R;
        else
            if (x < -R)
                y = R * (x + R) / (8 - R);
            else
                if (x <= R)
                    y = -sqrt(R * R - x * x);
                else
                    if (x < 5)
                        y = 2 * (x - R) / (5 - R);
                    else
                        y = 3;

        cout << "|" << setw(7) << setprecision(2) << x << " |"
             << setw(10) << setprecision(3) << y << " |" << endl;
        x += dx;
    }
    cout << "----------------------" << endl;
    return 0;
}