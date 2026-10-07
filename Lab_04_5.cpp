#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    double R, x, y;
    int i;

    cout << "R = ";
    cin >> R;

    //1 спосіб 
    for (i = 1; i <= 10; i++)
    {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;

        if ((x <= 0 && y >= 0 && x * x + y * y <= R * R) ||
            (y <= 0 && y >= -2 * x && y >= 2 * x - 2 * R))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    srand(time(NULL));

    //2 спосіб
    for (i = 1; i <= 10; i++)
    {
        x = -R + 2 * R * rand() / RAND_MAX;
        y = -R + 2 * R * rand() / RAND_MAX;

        cout << "x = " << x << ", y = " << y << " - ";
        if ((x <= 0 && y >= 0 && x * x + y * y <= R * R) ||
            (y <= 0 && y >= -2 * x && y >= 2 * x - 2 * R))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}