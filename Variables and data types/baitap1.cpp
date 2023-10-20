#include <iostream>

int main()
{
    float can_nang, chieu_cao;

    std::cin >> can_nang >> chieu_cao;

    float bmi = (can_nang) / (chieu_cao * chieu_cao);
    std::cout << "BMI "
              << "= " << bmi;

    return 0;
}
