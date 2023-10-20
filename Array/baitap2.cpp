#include <iostream>

int main()
{
    int m, n, numbers[10][10];
    
    std::cin >> m >> n;
    
    int sum = 0;
  for (int i = 0 ; i < m ; i ++ )
{
    for (int j = 0 ; j < n; j++ )
    {
        std::cin >> numbers [i][j];
        sum +=numbers[i][j];
    }

   
}