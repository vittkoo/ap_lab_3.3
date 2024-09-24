// Lab_03_3.cpp 
// < Дмитрович Віктор > 
// Лабораторна робота № 3.3 
// Розгалуження, задане графіком функції. 
// Варіант 7

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    double R;
    double y;

    cout << "Enter R: "; cin >> R;
    cout << "Enter x: "; cin >> x;

    // розгалуження в повній формі
    if (x <= -R)
        y = R;
    else
        if (-R < x && x <= R)
            y = -sqrt(R * R - x * x); // частина кола
        else
            if (R < x && x <= 6)
                y = -3 * (x - R) / (6 - R); // лінійна ділянка між R та 6
            else
                y = (x - 9) / 3; // лінійна ділянка після 6

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}