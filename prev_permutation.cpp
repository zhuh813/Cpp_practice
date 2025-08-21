// previous_permutation example : 大 -> 小 的所有排列
#include <iostream>    // std::cout
#include <algorithm>   // std::sort, std::reverse, std::prev_permutation

int main() {
    int myints[] = { 3, 1, 2, 4 };

    // 1. 先排序成升冪 (1 2 3 4)
    std::sort(myints, myints + 4);
    // 2. 再全部反轉成降冪 (4 3 2 1)，作為起點
    std::reverse(myints, myints + 4);

    std::cout << "The 4! possible permutations with 4 elements:\n";
    int i = 1;
    // 3. 以 do…while + prev_permutation 依字典逆序列舉所有排列
    do {
        std::cout << i << ": "
            << myints[0] << ' '
            << myints[1] << ' '
            << myints[2] << ' '
            << myints[3] << '\n';
        ++i;
    } while (std::prev_permutation(myints, myints + 4));

    // 4. 當 prev_permutation 回傳 false 時，容器會自動重設為最末排列 (4 3 2 1)
    std::cout << "After loop: "
        << myints[0] << ' '
        << myints[1] << ' '
        << myints[2] << ' '
        << myints[3] << '\n';

    return 0;
}
