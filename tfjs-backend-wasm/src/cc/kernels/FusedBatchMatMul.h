/* Copyright 2019 Google Inc. All Rights Reserved.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ===========================================================================*/

#ifndef KERNELS_BATCHMATMUL_H_
#define KERNELS_BATCHMATMUL_H_

#include <cstddef>

#include "src/cc/batchMatMul_impl.h"

namespace tfjs {
namespace wasm {
extern "C" {

void FusedBatchMatMul(const size_t a_id, const size_t* a_shape_ptr,
                      const size_t a_shape_len, const size_t b_id,
                      const size_t* b_shape_ptr, const size_t b_shape_len,
                      const bool transpose_a, const bool transpose_b,
                      const FusableActivation activation, const size_t bias_id,
                      const size_t prelu_weights_id, const size_t out_id);
}

}  // namespace wasm
}  // namespace tfjs

#endif  // KERNELS_BATCHMATMUL_H_
