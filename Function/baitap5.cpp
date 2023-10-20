#include <iostream>

int max(int numbers[10],int n)
{
    int max = numbers[0];
    for(int i=0;i<n;i++){
        if(max<numbers[i]){
            max = numbers[i];
        }
    }
    return max;
    
}
int main()
{
    int numbers[10];
    int n;

    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << max(numbers, n);

    return 0;
}
