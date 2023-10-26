#include <iostream>
#include <cmath>

int main()
{   
    double base, height, hypo;
    std::cout << "Enter the length of base side: " << "\n";
    std::cin >> base;
    std::cout << "Enter the height of triangle(perpendicular): " << "\n";
    std::cin >> height;
    hypo = sqrt(base * base + height * height);
    std::cout << "The length of hypotenuce is " << hypo;

}