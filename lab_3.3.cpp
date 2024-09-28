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

    cout << "R = ";
    cin >> R;
    cout << "x = ";
    cin >> x;

    // ������������ � ����� ����
    if (x <= -R)
        y = R;  // ������������� ��� ��� x <= -R

    else if (x > -R && x <= R)
        y = -sqrt(R * R - (x + R) * (x + R));  // ������ � ������� � (-R,R)

    else if (x > R && x <= 6)
        y = -R * (x - R) / (6 - R);  // ������ ��� �� (R,0) �� (6,-3)

    else if (x > 6 && x <= 9)
        y = (x - 6) - 3;  // ��� ��������� �� (6,-3) �� (9,0)

    else
        y = x - 9;  // ��� ���� x = 9

    cout << endl;
    cout << "y = " << y << endl;

    return 0;
}
