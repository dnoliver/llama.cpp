#pragma once

#include "ggml.h"

// GGML internal header

#ifdef __cplusplus
extern "C" {
#endif

// Quantization
void quantize_mat_q8_0(const float * GGML_RESTRICT x, void * GGML_RESTRICT y, int64_t nrows, int64_t n_per_row, int64_t blck_size_interleave);

// GEMV
void ggml_gemv_q4_0_4x4_q8_0(int n, float * GGML_RESTRICT s, size_t bs, const void * GGML_RESTRICT vx, const void * GGML_RESTRICT vy, int nr, int nc);
void ggml_gemv_q4_0_4x8_q8_0(int n, float * GGML_RESTRICT s, size_t bs, const void * GGML_RESTRICT vx, const void * GGML_RESTRICT vy, int nr, int nc);
void ggml_gemv_q4_0_8x8_q8_0(int n, float * GGML_RESTRICT s, size_t bs, const void * GGML_RESTRICT vx, const void * GGML_RESTRICT vy, int nr, int nc);

// GEMM
void ggml_gemm_q4_0_4x4_q8_0(int n, float * GGML_RESTRICT s, size_t bs, const void * GGML_RESTRICT vx, const void * GGML_RESTRICT vy, int nr, int nc);
void ggml_gemm_q4_0_4x8_q8_0(int n, float * GGML_RESTRICT s, size_t bs, const void * GGML_RESTRICT vx, const void * GGML_RESTRICT vy, int nr, int nc);
void ggml_gemm_q4_0_8x8_q8_0(int n, float * GGML_RESTRICT s, size_t bs, const void * GGML_RESTRICT vx, const void * GGML_RESTRICT vy, int nr, int nc);

#ifdef __cplusplus
}
#endif

