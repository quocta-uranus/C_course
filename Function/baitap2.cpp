#include <iostream> 
#include <math.h>
 using namespace std;

bool nguyento(int n)
{ 
    if(n < 2){ return 0; } 
    int cout =0;
     for(int i = 2; i <= sqrt(n); i++)
     { if(n % i == 0){ cout ++; } } 
     if(cout == 0)
     {
          return 1; }
          else
          { return 0; 
          }
           }

int main(){ 
    int n; 
    cin >> n;
     cout << nguyento(n); 
     return 0; }