#include <iostream>
#include <string>
#include <cmath>

int convertBinaryToDecimal(std:: string binary) {
    int decimal = 0; 
    int position = 0, power= 0;
    int N, hightest_power;
    N = binary.length();
    hightest_power = N - 1; // highest power of two
    // power of two for the digit at index 0
    for (position = 0; position < N; position++) {
        if (binary.at(position) == '1') {
            decimal += pow(2, hightest_power);
        }
        hightest_power--;
    }
    return decimal;
}

std:: string convertDecimalToBinary(int decimal) {

    std:: string binary = ""; // 空字串，用於儲存二進制的運算結果
    int dividend = decimal;
    int divisor = 0;
    int N = 0; // the largest power of 2
    int position = 0;

    N = log2(decimal);// 利用以2為基底的log()函數，來找到 the largest power of 2 的值

    for (position = N; position >= 0; position--) {
        divisor = pow(2, position); // 2^N
        if (dividend/divisor > 0) {
            binary += "1";
            dividend -= divisor;
        }
        else {
            binary += "0";
        }
    }
    return binary;
}

int main()
{
    int d_result;
    std::string b_result;
    std::string input_binary;

    std::cout << "輸入二進制: ";
    std::cin >> input_binary;
  
    d_result = convertBinaryToDecimal(input_binary);
    std::cout << "經過 convertBinaryToDecimal() 的運算，該十進制為" << d_result << "\n";

    std:: cout << "再把該結果再丟入轉二進制的運算\n";

    b_result = convertDecimalToBinary(d_result);

    std:: cout << "經過 convertDecimalToBinary() 的運算，該二進制為" << b_result << "\n";

    if (b_result == input_binary) {
        std::cout << "轉換驗證成功";
    }
    else {
        std::cout << "轉換驗證失敗";
    }

    return 0;
}


