#include <iostream>

int main()
{
    int i, j;
 
    for (i = 1; i<=9 ; ++i) {
        for (j = 2; j <= 9; ++j) {
            std::cout << j << " * " << i << " = " << j * i << "   ";
        }
        std::cout << "\n";
    }
}

