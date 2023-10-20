int main()
{
    int n, numbers[10];


   std:: cin >> n;
   int sum=0;
   
      for ( int i = 0; i < n; i++){
          std::cin >> numbers[i];
          sum += numbers[i];
         

      }
       std::cout << sum; 
         

    return 0;
}