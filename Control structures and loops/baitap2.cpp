#include <iostream>

int main()
{
    float tong_tien, luong_co_ban;

    std::cin >> tong_tien >> luong_co_ban;
    int tien_thue;
    
    
    if (tong_tien <= luong_co_ban){
        tien_thue = 0;

    }
    else {
        tien_thue = (tong_tien - luong_co_ban) *0.1;

    }
    int soTien = tong_tien - tien_thue;
    std::cout << "Thuc linh: " << soTien;