#ifndef HEAPINFO_H
#define HEAPINFO_H

#include <iostream>
#include <napi.h>



#ifdef __APPLE__
#include <unordered_map>
#define unordered_map std::unordered_map
#endif

using namespace std;

namespace hif
{
  class HEAP {
    public:
      struct HeapInfo
      {
        size_t totalHeapSize;
        size_t totalHeapExecutableSize;
        size_t totalPhysicalSize;
        size_t usedHeapSize;
        size_t heapSizeLimit;
        size_t totalAvailableSize;
        size_t mallocedMemory;
        size_t peakMallocedMemory;
        size_t numberOfNativeContexts;
        size_t numberOfDetachedContexts;
      };

      struct HeapData 
      {
        HeapInfo*  before;
        HeapInfo*  after;
        uint64_t   gcStartTime;
        uint64_t   gcEndTime;
        int        gctype;
      };
  }
}
