#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

#include "core/tensor.hpp"

using namespace dlvm;

TEST_CASE("Tensor basic functionality", "[tensor]") {
    SECTION("Tensor::numel works correctly") {
        Shape shape = {2, 3, 4}; // total = 2 * 3 * 4 = 24
        Tensor tensor(DType::Float32, shape);
        REQUIRE(tensor.numel() == 24);
    }

    SECTION("Tensor has correct dtype and shape") {
        Shape shape = {1, 5, 5};
        Tensor tensor(DType::Int32, shape);

        REQUIRE(tensor.dtype() == DType::Int32);
        REQUIRE(tensor.shape() == shape);
    }

    SECTION("Tensor memory allocation is not null") {
        Shape shape = {2, 2};
        Tensor tensor(DType::Float64, shape);

        REQUIRE(tensor.data() != nullptr);
    }
}
