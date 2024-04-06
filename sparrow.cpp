#include "sparrow.h"
#include <bitset>
#include <vector>
#include <utility>

namespace sparrow {
namespace warmup {

unsigned CountBits(const std::bitset<32>& bits, unsigned pos, unsigned len) {
    if (pos + len > 32) len = 32 - pos;
    unsigned count = 0;
    for (unsigned i = pos; i < pos + len; ++i) {
        if (bits[i]) count++;
    }
    return count;
}

unsigned CountBits(const std::vector<std::bitset<32>>& bitsets) {
    unsigned count = 0;
    for (const auto& bits : bitsets) {
        count += bits.count();
    }
    return count;
}

std::pair<std::vector<std::bitset<32>>, bool> BitAnd(const std::vector<std::bitset<32>>& a,
                                                     const std::vector<std::bitset<32>>& b) {
    std::vector<std::bitset<32>> result;
    bool valid = a.size() == b.size();

    if (valid) {
        for (size_t i = 0; i < a.size(); ++i) {
            result.push_back(a[i] & b[i]);
        }
    }

    return {result, valid};
}

} // namespace warmup
} // namespace sparrow
