#include <iostream>

using namespace std;

// Задаем функцию (в данном случае квадратичную)
#include <iostream>
#include <cmath>

// Заданная функция (пример: x^2 - 4)
double targetFunction(double x) {
    return std::pow(x, 2) - 4;
}

// Дихотомический метод для нахождения минимума
double dichotomousMethod(double a, double b, double epsilon) {
    double mid, x1, x2;

    while ((b - a) > epsilon) {
        mid = (a + b) / 2;
        x1 = mid - epsilon / 2;
        x2 = mid + epsilon / 2;

        if (targetFunction(x1) < targetFunction(x2)) {
            b = x2;
        }
        else {
            a = x1;
        }
    }

    return (a + b) / 2;
}

int main() {
    double a, b, epsilon;

    // Введите начальный интервал [a, b] и требуемую точность epsilon
    std::cout << "Введите начальный интервал [a, b]: ";
    std::cin >> a >> b;

    std::cout << "Введите требуемую точность epsilon: ";
    std::cin >> epsilon;

    // Вызываем дихотомический метод
    double result = dichotomousMethod(a, b, epsilon);

    // Выводим результат
    std::cout << "Минимум функции находится при x = " << result << " и равен " << targetFunction(result) << std::endl;

    return 0;
}
