// src/core/shape.hpp
#pragma once
#include <vector>
#include <numeric>
#include <stdexcept>

namespace dlvm {

using Shape = std::vector<size_t>;

inline size_t numel(const Shape& shape) {
    return std::accumulate(shape.begin(), shape.end(), size_t(1), std::multiplies<>());
}

} // namespace dlvm
