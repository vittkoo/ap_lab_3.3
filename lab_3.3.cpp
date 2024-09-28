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

    cout << "R = ";
    cin >> R;
    cout << "x = ";
    cin >> x;

    // розгалуження в повній формі
    if (x <= -R)
        y = R;  // горизонтальна лінія при x <= -R

    else if (x > -R && x <= R)
        y = -sqrt(R * R - (x + R) * (x + R));  // півколо з центром у (-R,R)

    else if (x > R && x <= 6)
        y = -R * (x - R) / (6 - R);  // спадна лінія від (R,0) до (6,-3)

    else if (x > 6 && x <= 9)
        y = (x - 6) - 3;  // лінія зростання від (6,-3) до (9,0)

    else
        y = x - 9;  // лінія після x = 9

    cout << endl;
    cout << "y = " << y << endl;

    return 0;
}
