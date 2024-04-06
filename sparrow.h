#ifndef SPARROW_H
#define SPARROW_H

#include <bitset>
#include <vector>
#include <utility>

namespace sparrow {
namespace warmup {

unsigned CountBits(const std::bitset<32>& bits, unsigned pos, unsigned len);
unsigned CountBits(const std::vector<std::bitset<32>>& bitsets);
std::pair<std::vector<std::bitset<32>>, bool> BitAnd(const std::vector<std::bitset<32>>& a,
                                                     const std::vector<std::bitset<32>>& b);

} // namespace warmup
} // namespace sparrow

#endif // SPARROW_H
