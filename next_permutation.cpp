/* 1. STL : next_permutation : 小 -> 大 的所有排列 */

/* 這段 C++ 範例示範如何利用 <algorithm> 中的 std::next_permutation
按字典（lexicographical）順序，從最小排列一路產生並列舉出一組元素的所有排列組合。
i.e 依字典順序列出所有 4! = 24 種排列，從最小 1 2 3 4 到最大 4 3 2 1 */

// next_permutation example
#include <iostream>    // std::cout
#include <algorithm>   // std::next_permutation, std::sort

int main() {
    int myints[] = { 3, 1, 2, 4 };
    // sort the array in ascending order up to 4 elements
    std::sort(myints, myints + 4); // 先將陣列排序為升冪，確保從「最小」的排列 (1 2 3 4) 開始。

    std::cout << "The 4! possible permutations with 4 elements:\n";

    int i = 1;
    do {
        // print the elements in the array
        std::cout << i << ": "
            << myints[0] << ' ' << myints[1] << ' '
            << myints[2] << ' ' << myints[3] << '\n';
        i++;
        // permutation stops when array is in descending order
        // if the while condition is false at the first time, the array will be
        // ascending regardless.
    } while (std::next_permutation(myints, myints + 4));

    std::cout << "After loop: "
        << myints[0] << ' ' << myints[1] << ' '
        << myints[2] << ' ' << myints[3] << '\n';

    return 0;
}
