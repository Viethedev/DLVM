// src/core/tensor.cpp
#include "tensor.hpp"
#include <cstdlib>
#include <cstring>

namespace dlvm {

Tensor::Tensor() : dtype_(DType::Unknown), shape_({}), buffer_(nullptr) {}

Tensor::Tensor(DType dtype, Shape shape)
    : dtype_(dtype), shape_(shape)
{
    size_t total_bytes = dlvm::numel(shape_) * dtype_size(dtype_);
    buffer_ = std::shared_ptr<void>(malloc(total_bytes), free);
    std::memset(buffer_.get(), 0, total_bytes);  // zero-init
}

Tensor::~Tensor() {}

DType Tensor::dtype() const {
    return dtype_;
}

const Shape& Tensor::shape() const {
    return shape_;
}

size_t Tensor::numel() const {
    return dlvm::numel(shape_);
}

void* Tensor::data() {
    return buffer_.get();
}

} // namespace dlvm
