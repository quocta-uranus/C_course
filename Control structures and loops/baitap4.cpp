#include <iostream>

int main()
{
    int year, month;

    std::cin >> year >> month;
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:   
        std:: cout << "Thang " << month << " nam "<< year << " co 31 ngay";
        break;
        case 2:
        std:: cout << "Thang " << month << " nam " << year << " co 29 ngay";
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        std:: cout << "Thang " << month << " nam " << year << " co 30 ngay";
        break;
        default:
        std::cout << "Thang khong hop le";
        break;
    }
    

    return 0;
}