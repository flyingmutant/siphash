#ifndef __SIPHASH_H__
#define __SIPHASH_H__

#include <stddef.h>
#include <stdint.h>


uint64_t siphash24(uint64_t key0, uint64_t key1, void const* data, size_t size);


#endif

