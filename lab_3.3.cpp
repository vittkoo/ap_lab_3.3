// Lab_03_3.cpp 
// < ��������� ³���� > 
// ����������� ������ � 3.3 
// ������������, ������ �������� �������. 
// ������ 7

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

    // ������������ � ����� ����
    if (x <= -R)
        y = R;
    else
        if (-R < x && x <= R)
            y = -sqrt(R * R - x * x); // ������� ����
        else
            if (R < x && x <= 6)
                y = -3 * (x - R) / (6 - R); // ����� ������ �� R �� 6
            else
                y = (x - 9) / 3; // ����� ������ ���� 6

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}