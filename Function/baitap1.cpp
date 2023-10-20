#include <iostream>

int sum( int &a, int &b) {

int c = a + b;
return c;
}

int main() { 
    int a, b;

std::cin >> a >> b;

std::cout << sum(a, b);
return 0;
}