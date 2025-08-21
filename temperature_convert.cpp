#include <iostream>

double temperature_convert(double temp, char type) {
    switch (type) {
        case 'f': // c _to_f
            temp = temp * (static_cast < double>(9) /5) + 32;
            break;
        case 'c': // f_to_c
            temp = (temp - 32) * (static_cast < double>(5) /9);
            break;
        default:
            std::cout << "Error";
    }
    return temp;
}

int main()
{
    char t;
    double input_temp, result;
    std::cout << "溫度轉換: 轉成攝氏: (c) 或是 轉成華氏? : (f)\n";
    std::cin >> t;
    std::cout << "輸入溫度 : \n";
    std::cin >> input_temp;

    result = temperature_convert(input_temp, t);
    
    if (t == 'c') {
        std::cout << "轉換成功, 攝氏溫度為 " << result;
    }else if (t == 'f') {
        std::cout << "轉換成功, 華氏溫度為 " << result;
    }
    else {
        std::cout << "Error";
    }
  
}

