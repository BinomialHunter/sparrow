#include "sparrow.h"
#include <iostream>
#include <bitset>
#include <vector>

int main() {
    using sparrow::warmup::CountBits;
    using sparrow::warmup::BitAnd;
    
    std::vector<std::bitset<32>> a{std::bitset<32>("11100000000001100000000000100010")};
    std::vector<std::bitset<32>> b{std::bitset<32>("01110000000001111000000000100001")};

    auto result_pair = BitAnd(a, b);
    if (result_pair.second) {
        std::cout << "Number of 1's in the result: " << CountBits(result_pair.first) << std::endl;
    } else {
        std::cout << "Invalid input: Vectors of different lengths." << std::endl;
    }

    return 0;
}
