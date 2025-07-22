// src/core/tensor.hpp
#pragma once
#include "dtype.hpp"
#include "shape.hpp"
#include <memory>

namespace dlvm {

class Tensor {
public:
    Tensor();
    Tensor(DType dtype, Shape shape);
    ~Tensor();

    DType dtype() const;
    const Shape& shape() const;
    size_t numel() const;
    void* data();  // raw pointer

private:
    DType dtype_;
    Shape shape_;
    std::shared_ptr<void> buffer_;
};

} // namespace dlvm
