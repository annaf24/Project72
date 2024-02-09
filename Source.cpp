#include <iostream>

using namespace std;

// ������ ������� (� ������ ������ ������������)
#include <iostream>
#include <cmath>

// �������� ������� (������: x^2 - 4)
double targetFunction(double x) {
    return std::pow(x, 2) - 4;
}

// �������������� ����� ��� ���������� ��������
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

    // ������� ��������� �������� [a, b] � ��������� �������� epsilon
    std::cout << "������� ��������� �������� [a, b]: ";
    std::cin >> a >> b;

    std::cout << "������� ��������� �������� epsilon: ";
    std::cin >> epsilon;

    // �������� �������������� �����
    double result = dichotomousMethod(a, b, epsilon);

    // ������� ���������
    std::cout << "������� ������� ��������� ��� x = " << result << " � ����� " << targetFunction(result) << std::endl;

    return 0;
}
