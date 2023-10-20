#include <iostream>

void bubble_sort(int array[] , int n) {
     for(int i = 0 ; i < n - 1 ; i++) { 
         for(int k = 0 ; k < n - i - 1 ; k++) { 
             if(array[k] > array[k+1]) { 
                 int temp = array[k]; 
                 array[k] = array[k+1]; 
                 array[k+1] = temp; }
                  } 
                  }
                   }

void input_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
}

void print_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
}

int main()
{
    int numbers[10];
    int n;

    std::cin >> n;
    
    input_array(numbers, n);
    bubble_sort(numbers, n);
    print_array(numbers, n);

    return 0;
}
