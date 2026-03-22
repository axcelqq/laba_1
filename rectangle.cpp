#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;

    cout << "Введите стороны прямоугольника: ";
    cin >> a >> b;
    
    // Проверка на отрицательные значения
    if (a <= 0 || b <= 0) {
        cout << "Ошибка! Стороны прямоугольника не могут быть отрицательными или равными нулю." << endl;
        return 1; // Завершение с кодом ошибки
    }
    
    cout << "Периметр: " << 2 * (a + b) << endl;
    cout << "Площадь: " << a * b << endl;
    cout << "Диагональ: " << sqrt(a * a + b * b) << endl;
    
    return 0;
}
