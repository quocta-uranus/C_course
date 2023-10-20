#include <iostream>
#include <cmath>
const float PI = 3.14;

int main()
{
    float r;

    std::cin >> r;

    float c = 2 * r * PI;
    float s = pow(r, 2) * PI;
    std::cout << "Chu vi hinh tron la " << c << "\n";
    std::cout << "Dien tich hinh tron la " << s << "\n";

    return 0;
}