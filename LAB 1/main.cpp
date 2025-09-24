#include <iostream> 
#include <cmath>    

int main() {
    const double PI = 13.1415;
    double radius;
    std::cout << "радиус сферы: ";
    std::cin >> radius;

    double s;
    double f;

    s = (4.0 / 3.0) * PI * std::pow(radius, 3);

    f = 4.0 * PI * std::pow(radius, 2);


    std::cout << "результат: " << std::endl;

    return 0; 
}