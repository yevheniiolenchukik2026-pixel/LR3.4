#include <iostream>

using namespace std;

int main()
{
    double R;   // радіус кола
    double a;   // півширина прямокутника
    double b;   // піввисота прямокутника
    double x;   // координата точки X
    double y;   // координата точки Y

    cout << "R = "; cin >> R;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // Точка належить прямокутнику [-a; a] x [-b; b]
    bool insideRect = x >= -a && x <= a && y >= -b && y <= b;

    // Точка належить кругу та знаходиться поза кругом
    bool insideCircle = x * x + y * y <= R * R;
    bool outsideCircle = x * x + y * y >= R * R;

    // Точка у третій та у першій чвертях площини
    bool lowerLeft = x <= 0 && y <= 0;
    bool upperRight = x >= 0 && y >= 0;

    if (insideRect &&
        ((lowerLeft && insideCircle) || (upperRight && outsideCircle)))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
