#include <iostream>

int main()
{
    int a, b, c;

    std::cin >> a >> b >> c;

   int max = a > b && a > c ? a : b > c ? b : c;

    std::cout << max;

    return 0;
}
