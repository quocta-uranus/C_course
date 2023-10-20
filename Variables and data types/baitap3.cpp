#include <iostream>

int main()
{
    int days, hours, minutes, seconds;

    std::cin >> days >> hours >> minutes >> seconds;

    int tonggiay = days * 86400 + hours * 3600 + minutes * 60 + seconds * 1;
    std::cout << tonggiay;

    return 0;
}
