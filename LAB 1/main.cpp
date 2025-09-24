#include <iostream> 
#include <cmath>    

int main() {
    setlocale(LC_ALL,"Russian");
    const double PI = 13.1415;
    double radius;
    std::cin >> radius; //т.к значение может быть и дробным
    std::cout << "размер double - " << sizeof(radius) * 8 << " бит, минимальное значение - 0, максимальное - " << UINT_MAX << std::endl;

    double sfera = (4.0 / 3.0) * PI * std::pow(radius, 3); //т.к в формуле есть PI
    double plo = 4.0 * PI * std::pow(radius, 2); //т.к в формуле есть PI

    std::cout << "объем сферы: " << sfera << std::endl;
    std::cout << "площадь поверхности сферы: " << plo << std::endl;

    std::cout << "размер double - " << sizeof(sfera) * 8 << " бит, минимальное значение - " << DBL_MIN << ", максимальное - " << DBL_MAX;
    std::cout << "размер double - " << sizeof(plo) * 8 << " бит, минимальное значение - " << DBL_MIN << ", максимальное - " << DBL_MAX;
    return 0; 
}