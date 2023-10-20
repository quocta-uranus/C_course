#include <iostream>

int total(int numbers[10], int n) { 
    int sum = 0;
     for(int i = 0; i < n; i++) {
          sum += numbers[i];
           }
            return sum; }
int main()
{
    int numbers[10];
    int n;

    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];

    }

    std::cout << total(numbers, n);

    return 0;
}
