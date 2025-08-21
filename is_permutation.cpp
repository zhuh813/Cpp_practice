// STL : std::is_permutation，可用來比較兩段序列是否包含完全相同的元素（順序可不同）
#include <iostream>
#include <algorithm>   // for std::is_permutation

// Driver Code
int main()
{
    int arr_A[] = { 1, 5, 0, 3 };
    //int arr_B[] = { 0, 5, 3, 1 };
    int arr_B[] = { 9, 5, 3, 1 };

    // Check if array B is a permutation of array A
    if (std::is_permutation(arr_A, arr_A + 4, arr_B)) {
        std::cout << "B is a permutation of A";
    }
    else {
        std::cout << "B is not a permutation of A";
    }
    return 0;
}
