#ifndef TRITON_CONVERSION_TRITONGPU_TO_LLVM_H
#define TRITON_CONVERSION_TRITONGPU_TO_LLVM_H

#include "TritonGPUToLLVMBase.h"

using namespace mlir;
using namespace mlir::triton;

void populateTritonGPUToLLVMPatterns(
    TritonGPUToLLVMTypeConverter &typeConverter, RewritePatternSet &patterns,
    int numWarps, AxisInfoAnalysis &axisInfoAnalysis,
    const Allocation *allocation, Value smem,
    ConvertTritonGPUOpToLLVMPatternBase::IndexCacheInfo &indexCacheInfo,
    PatternBenefit benefit);

namespace mlir {
namespace LLVM {

void vprintf(StringRef msg, ValueRange args,
             ConversionPatternRewriter &rewriter);
}
}

#endif
