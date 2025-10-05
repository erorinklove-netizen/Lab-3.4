// Lab 3.4.cpp 
// < Якимів Наталія > 
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 1
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, R;
    cout << "x = ";  if (!(cin >> x)) return 0;
    cout << "y = ";  if (!(cin >> y)) return 0;
    cout << "R = ";  if (!(cin >> R)) return 0;

    if (R < 0) R = fabs(R); // робимо радіус додатнім

    bool insideCircle = (x * x + y * y <= R * R);
    // верхній сектор: y >= 0 та y >= |x|
    // нижній сектор: y <= 0 та y <= -|x|
    bool inSector = (y >= 0 && y >= fabs(x)) || (y <= 0 && y <= -fabs(x));

    if (insideCircle && inSector)
        cout << "yes\n";
    else
        cout << "no\n";

    return 0;
}
