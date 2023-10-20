#include <iostream>

int main()
{
    int n, numbers[10];

    std::cin >> n;
    for(int i=0;i<n;i++)
{
	std::cin>>numbers[i];
}

    for(int i = n-1 ; i > 0;i--){
        for (int j = 0; j < i;j++){
           if (numbers[j] > numbers[j+1]){
                int ss = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = ss;
            }   

            
        }
    }
      for (int i = 0; i < n; i++){
        std::cout << numbers[i] << " ";
    }

    return 0;
}